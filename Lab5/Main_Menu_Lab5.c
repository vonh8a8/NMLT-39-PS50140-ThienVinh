#include <stdio.h>
#include <stdbool.h>
void menu();
void chucNang1();
int soLonNhat(int a, int b, int c);
void chucNang2();
bool kiemTraNamNhuan(int nam);
void chucNang3();
void hoanVi(int *a, int *b);
void chucNang4();
const char *phanLoaiTamGiac(float a, float b, float c);
int main()
{
    int chon;
    do
    {
        menu();
        printf("Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 1:
            chucNang1();
            break;
        case 2:
            chucNang2();
            break;
        case 3:
            chucNang3();
            break;
        case 4:
            chucNang4();
            break;
        case 5:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
        }
    } while (chon != 5);
    return 0;
}
void menu()
{
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 5               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tim gia tri lon nhat trong 3 so                |\n");
    printf("| 2. Kiem tra nam nhuan                             |\n");
    printf("| 3. Hoan vi 2 so (Su dung Con tro)                 |\n");
    printf("| 4. Kiem tra & Phan loai Tam giac                  |\n");
    printf("| 5. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
}
// Chuc nang 1: Tim gia tri lon nhat trong 3 so
void chucNang1()
{
    int a, b, c;
    printf("\nChuc nang 1: Tim gia tri lon nhat trong 3 so\n");
    printf("Nhap a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Gia tri lon nhat trong 3 so vua nhap la: %d\n", soLonNhat(a, b, c));
}

int soLonNhat(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}
// Chuc nang 2: kiem tra nam nhuan
void chucNang2()
{
    int nam;
    printf("\nChuc nang 2: Kiem tra nam nhuan\n");
    printf("Nhap nam: ");
    scanf("%d", &nam);
    if (kiemTraNamNhuan(nam))
    {
        printf("Nam %d la nam nhuan.\n", nam);
    }
    else
    {
        printf("Nam %d khong phai la nam nhuan.\n", nam);
    }
}

bool kiemTraNamNhuan(int nam)
{
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    {
        return true;
    }
    return false;
}
// Chuc nang 3: Hoan vi 2 so (Su dung Con tro)
void chucNang3()
{
    int a, b;
    printf("\nChuc nang 3: Hoan vi 2 so (Su dung Con tro)\n");
    printf("Nhap 2 so nguyen: ");
    scanf("%d %d", &a, &b);
    printf("Truoc khi hoan vi: a = %d, b = %d\n", a, b);
    hoanVi(&a, &b);
    printf("Sau khi hoan vi: a = %d, b = %d\n", a, b);
}

void hoanVi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Chuc nang 4: Kiem tra & Phan loai Tam giac
void chucNang4()
{
    printf("\nChuc nang 4: Kiem tra & Phan loai Tam giac\n");
    float a, b, c;
    printf("Nhap 3 canh cua tam giac: ");
    scanf("%f %f %f", &a, &b, &c);
    const char *loai = phanLoaiTamGiac(a, b, c);
    printf("Tam giac vua nhap la: %s\n", loai);
}

const char *phanLoaiTamGiac(float a, float b, float c)
{
    // Tam giác đều: a == b và b == c.
    // Tam giác vuông: a^2 + b^2 == c^2 hoặc a^2 + c^2 == b^2 hoặc b^2 + c^2 == a^2.
    // Tam giác cân: a == b hoặc a == c hoặc b == c.
    // Tam giác vuông cân: Vừa thỏa mãn điều kiện Vuông vừa thỏa mãn Cân.
    // Tam giác thường: Các trường hợp còn lại.

    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) //&& a-b < c && a-c < b && b-c < a
    {
        if (a == b && b == c)
        {
            return "Tam giac deu";
        }
        else if (a == b || a == c || b == c)
        {
            return "Tam giac can";
        }
        else if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        {
            if (a == b || a == c || b == c)
            {
                return "Tam giac vuong can";
            }
            else
            {
                return "Tam giac vuong";
            }
        }
        else
        {
            return "Tam giac thuong";
        }
    }
    else
    {
        return "Khong phai tam giac";
    }
    return "Khong phai bo 3 canh cua tam giac";
}

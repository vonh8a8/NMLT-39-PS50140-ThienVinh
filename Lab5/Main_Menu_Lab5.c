#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
void menu();
void chucNang1();
int soLonNhat(int a, int b, int c);
void chucNang2();
bool kiemTraNamNhuan(int nam);
void chucNang3();
void chucNang4();
void chucNang5();
int main()
{
    setlocale(LC_ALL, "Vietnamese");
    int chon;
    do
    {
        menu();
        printf(">> Xin mời chọn chức năng (1-5): ");
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
            chucNang5();
            break;
        default:
            printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
            break;
        }
    } while (chon != 5);
    return 0;
}
void menu()
{
    printf("+---------------------------------------------------+");
    printf("|             MENU CHƯƠNG TRÌNH LAB 5               |");
    printf("+---------------------------------------------------+");
    printf("| 1. Tìm giá trị lớn nhất trong 3 số                |");
    printf("| 2. Kiểm tra Năm nhuận                             |");
    printf("| 3. Hoán vị 2 số (Sử dụng Con trỏ)                 |");
    printf("| 4. Kiểm tra & Phân loại Tam giác                  |");
    printf("| 5. Thoát chương trình                             |");
    printf("+---------------------------------------------------+");
}

void chucNang1()
{
    int a, b, c;
    printf("Nhập 3 số nguyên: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Giá trị lớn nhất trong 3 số là: %d\n", soLonNhat(a, b, c));
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

void chucNang2()
{
    int nam;
    printf("Nhập năm: ");
    scanf("%d", &nam);
    if (kiemTraNamNhuan(nam))
    {
        printf("Năm %d là năm nhuận.\n", nam);
    }
    else
    {
        printf("Năm %d không phải là năm nhuận.\n", nam);
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

void chucNang3()
{
    printf("Chức năng 3: Hoán vị 2 số (Sử dụng Con trỏ)\n");
}

void chucNang4()
{
    printf("Chức năng 4: Kiểm tra & Phân loại Tam giác\n");
}

void chucNang5()
{
    printf("Chức năng 5: Thoát chương trình\n");
}

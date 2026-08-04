#include <stdio.h>
void yeuCau1();
float tinhTrungBinh(int Mang[], int n);
void yeuCau2();
void yeuCau3();
int main()
{
    int chon;
    printf("+---------------------------------------------------+\n");
    printf("|             MENU CHUONG TRINH LAB 6               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 1. Tinh trung binh tong so chia het cho 3 va 5    |\n");
    printf("| 2. Tim gia tri Lon nhat va Nho nhat trong Mang    |\n");
    printf("| 3. Sap xep Mang theo thu tu Giam dan              |\n");
    printf("| 4. Ma tran binh phuong (Mang 2 chieu)             |\n");
    printf("| 5. Loc va xuat vi tri cac So le trong Ma tran     |\n");
    printf("| 6. Thoat chuong trinh                             |\n");
    printf("+---------------------------------------------------+\n");
    printf("Ban chon chuc nang: ");
    scanf("%d", &chon);
    switch (chon)
    {
    case 1:
        yeuCau1();
        break;
    case 2:
        yeuCau2();
        break;
    case 3:
        yeuCau3();
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        printf("Ban chon chuc nang 6: Thoat chuong trinh\n");
        break;
    default:
        printf("Lua chon khong hop le. Vui long chon lai.(1 - 6)\n");
        break;
    }
    return 0;
}
float tinhTrungBinh(int Mang[], int n)
{
    int i, tong = 0, dem = 0;
    float TB;

    for (i = 0; i < n; i++)
    {
        if (Mang[i] % 3 == 0 && Mang[i] % 5 == 0)
        {
            tong += Mang[i];
            dem++;
        }
    }

    if (dem > 0)
    {
        TB = (float)tong / dem;
        return TB;
    }
    else
    {
        return -1; // Trường hợp không có số nào chia hết cho cả 3 và 5
    }
}
void yeuCau1()
{
    int n, i, tong = 0, dem = 0;
    float TB;

    printf("Ban chon chuc nang 1: Tinh trung binh tong so chia het cho 3 va 5\n");
    printf("Nhap mot so nguyen duong n: ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("Vui long nhap lai mot so nguyen duong n (>0)!\n");
        printf("Nhap mot so nguyen duong n: ");
        scanf("%d", &n);
    }

    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            tong += i;
            dem++;
        }
    }

    if (dem > 0)
    {
        TB = (float)tong / dem;
        printf("Trung binh tong cac so chia het cho ca 3 va 5 tu 1 den %d la: %.2f\n", n, TB);
    }
    else
    {
        printf("Khong co so nao chia het cho ca 3 va 5 tu 1 den %d\n", n);
    }
}
void yeuCau2()
{
    int Mang[100], n, i, max, min;
    printf("Ban chon chuc nang 2: Tim gia tri Lon nhat va Nho nhat trong Mang\n");
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &Mang[i]);
    }
    max = Mang[0];
    min = Mang[0];
    for (i = 1; i < n; i++)
    {
        if (Mang[i] > max)
        {
            max = Mang[i];
        }
        if (Mang[i] < min)
        {
            min = Mang[i];
        }
    }
    printf("Gia tri lon nhat trong mang la: %d\n", max);
    printf("Gia tri nho nhat trong mang la: %d\n", min);
}
void yeuCau3()
{
    int Mang[100], n, i, j, temp;
    printf("Ban chon chuc nang 3: Sap xep Mang theo thu tu Giam dan\n");
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &Mang[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (Mang[i] < Mang[j])
            {
                temp = Mang[i];
                Mang[i] = Mang[j];
                Mang[j] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep theo thu tu Giam dan la: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", Mang[i]);
    }
    printf("\n");
}
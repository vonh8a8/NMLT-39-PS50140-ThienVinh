#include <stdio.h>
#include <float.h>
void yeuCau1();
float tinhTrungBinh(int Mang[], int n);
void yeuCau2();
void hoanVi(int *a, int *b);
void yeuCau3();
void maTranBinhPhuong(int row, int col);
void yeuCau5();
int main()
{
    int chon;
    do
    {

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
        if (chon < 1 || chon > 6)
        {
            printf("Lua chon khong hop le. Vui long chon lai.(1 - 6)\n");
            printf("Ban chon chuc nang: ");
            scanf("%d", &chon);
        }
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
            maTranBinhPhuong(3, 3);
            break;
        case 5:
            yeuCau5();
            break;
        case 6:
            printf("Ban chon chuc nang 6: Thoat chuong trinh\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.(1 - 6)\n");
            break;
        }
    } while (chon != 6);
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
        return -FLT_MAX; // Trường hợp không có số nào chia hết cho cả 3 và 5
    }
}
void yeuCau1()
{
    int n;
    int Mang[10];
    printf("Ban chon chuc nang 1: Tinh trung binh tong so chia het cho 3 va 5\n");
    printf("Nhap so luong phan tu cua mang (n <= 10): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &Mang[i]);
    }
    float TB = tinhTrungBinh(Mang, n);
    if (TB != -FLT_MAX)
    {
        printf("Trung binh tong so chia het cho 3 va 5 la: %.2f\n", TB);
    }
    else
    {
        printf("Khong co so nao chia het cho ca 3 va 5\n");
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
void hoanVi(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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
                hoanVi(&Mang[i], &Mang[j]);
            }
        }
    }
    printf("Mang sau khi sap xep theo thu tu Giam dan la: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", Mang[i]);
    }
    printf("\n");
}
void maTranBinhPhuong(int row, int col)
{
    int A[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("A[%d][%d] = %3d \t", i, j, A[i][j] * A[i][j]);
        }
        printf("\n");
    }
}
void yeuCau5()
{
    printf("Ban chon chuc nang 5: Loc va xuat vi tri cac So le trong Ma tran\n");
    int A[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("===============================================================\n");
    printf("Cac so le trong ma tran la: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A[i][j] % 2 != 0)
            {
                printf("A[%d][%d] = %d \t", i, j, A[i][j]);
            }
            else
            {
                printf("A[%d][%d] = null \t", i, j);
            }
        }
        printf("\n");
    }
}
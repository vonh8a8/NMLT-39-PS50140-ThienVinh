#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char MSSV[20];
    char hoTen[50];
    float diemTB;
};

struct SinhVien mangSV[100];
int n = 0;

// Nguyen mau ham
void nhapXuatSinhVien(struct SinhVien mangSV[], int *n);
void sapXepSinhVien(struct SinhVien mangSV[], int n);
void timKiemSinhVien(struct SinhVien mangSV[], int n);
void xuatHocBong(struct SinhVien mangSV[], int n);

int main()
{
    int chon;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|         HE THONG QUAN LY SINH VIEN (LAB 8)        |\n");
        printf("+---------------------------------------------------+\n");
        printf("| 1. Nhap va Xuat danh sach sinh vien               |\n");
        printf("| 2. Sap xep sinh vien theo diem TB tang dan        |\n");
        printf("| 3. Tim kiem sinh vien theo Ma so sinh vien (MSSV) |\n");
        printf("| 4. Xuat danh sach sinh vien dat Hoc bong (>= 8.0) |\n");
        printf("| 5. Thoat chuong trinh                             |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Xin moi chon chuc nang (1-5): ");
        scanf("%d", &chon);

        switch (chon)
        {
        case 1:
            printf("Ban chon chuc nang 1: Nhap va Xuat danh sach sinh vien\n");
            nhapXuatSinhVien(mangSV, &n);
            break;
        case 2:
            printf("Ban chon chuc nang 2: Sap xep sinh vien theo diem TB tang dan\n");
            sapXepSinhVien(mangSV, n);
            break;
        case 3:
            printf("Ban chon chuc nang 3: Tim kiem sinh vien theo MSSV\n");
            timKiemSinhVien(mangSV, n);
            break;
        case 4:
            printf("Ban chon chuc nang 4: Xuat danh sach sinh vien dat Hoc bong\n");
            xuatHocBong(mangSV, n);
            break;
        case 5:
            printf(">> Ban chon chuc nang 5: Thoat chuong trinh <<\n");
            break;
        default:
            printf(">> Vui long chon tu 1 den 5 <<\n");
        }

    } while (chon != 5);

    return 0;
}
//=============================================================================================================
void nhapXuatSinhVien(struct SinhVien mangSV[], int *n)
// int *n con trỏ tới số lượng sinh viên (dùng để lưu số lượng nhập vào).
{
    printf("Nhap so luong sinh vien: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        printf(">> Sinh vien %d <<\n", i + 1);
        printf("Nhap MSSV: ");
        scanf("%s", mangSV[i].MSSV);

        printf("Nhap Ho ten: ");
        getchar();
        // getchar loại bỏ ký tự xuống dòng còn sót lại từ lần nhập trước.
        fgets(mangSV[i].hoTen, sizeof(mangSV[i].hoTen), stdin);
        mangSV[i].hoTen[strcspn(mangSV[i].hoTen, "\n")] = '\0';
        // strcspn để xóa ký tự \n ở cuối chuỗi.

        printf("Nhap diem TB: ");
        scanf("%f", &mangSV[i].diemTB);
        printf("\n");
    }
    printf(" >> Danh sach sinh vien vua nhap <<\n");
    printf("%-5s %-20s %-12s %-6s\n", "STT", "Ho va Ten", "MSSV", "DiemTB");
    // %-5d %-20s %-12s %-6.2f dùng để chỉnh ngay ngắn theo số lượng kí tự đã quy định, căn trái
    for (int i = 0; i < *n; i++)
    {
        printf("%-5d %-20s %-12s %-6.2f\n", i + 1, mangSV[i].hoTen, mangSV[i].MSSV, mangSV[i].diemTB);
    }
}
//=============================================================================================================
void sapXepSinhVien(struct SinhVien mangSV[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mangSV[i].diemTB > mangSV[j].diemTB)
            {
                struct SinhVien temp = mangSV[i];
                mangSV[i] = mangSV[j];
                mangSV[j] = temp;
            }
        }
    }
    printf("\n>> Danh sach sau khi sap xep <<\n");
    printf("%-5s %-20s %-12s %-6s\n", "STT", "Ho va Ten", "MSSV", "DiemTB");
    for (int i = 0; i < n; i++)
    {
        printf("%-5d %-20s %-12s %-6.2f\n", i + 1, mangSV[i].hoTen, mangSV[i].MSSV, mangSV[i].diemTB);
    }
}
//=============================================================================================================
void timKiemSinhVien(struct SinhVien mangSV[], int n)
{
    char mssvTim[50];
    int found = 0;
    printf("Nhap MSSV can tim: ");
    scanf("%s", mssvTim);
    for (int i = 0; i <= n - 1; i++)
    {
        if (strcmp(mangSV[i].MSSV, mssvTim) == 0)
        {
            printf(">> Thong tin sinh vien can tim <<\n");
            printf("%-5s %-20s %-12s %-6s\n", "STT", "Ho va Ten", "MSSV", "DiemTB");
            printf("%-5d %-20s %-12s %-6.2f\n", i + 1, mangSV[i].hoTen, mangSV[i].MSSV, mangSV[i].diemTB);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf(">> Khong tim thay sinh vien co MSSV nay <<\n");
    }
}
//=============================================================================================================
void xuatHocBong(struct SinhVien mangSV[], int n)
{
    printf("\n>> Danh sach sinh vien dat hoc bong (>= 8.0) <<\n");
    printf("%-5s %-20s %-12s %-6s\n", "STT", "Ho va Ten", "MSSV", "DiemTB");
    for (int i = 0; i <= n - 1; i++)
    {

        if (mangSV[i].diemTB >= 8.0)
        {
            printf("%-5d %-20s %-12s %-6.2f\n", i + 1, mangSV[i].hoTen, mangSV[i].MSSV, mangSV[i].diemTB);
        }
    }
}
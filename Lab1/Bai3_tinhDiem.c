#include <stdio.h>
#include <string.h>
#include <time.h> //chạy chương trình tính tuổi
int main()
{
    int toan, ly, hoa;
    char HoVaTen[50];
    char MSSV[10];
    unsigned short Namsinh;

    printf("Nhap ho va ten: ");
    scanf("%[^\n]", HoVaTen);

    printf("Nhap MSSV: ");
    scanf("%s", MSSV);
    getchar();

    printf("Nhap nam sinh: ");
    scanf("%hu", &Namsinh);

    printf("Nhap diem mon Toan: ");
    scanf("%d", &toan);

    printf("Nhap diem mon Ly: ");
    scanf("%d", &ly);

    printf("Nhap diem mon Hoa: ");
    scanf("%d", &hoa);

    printf("\nThong tin sinh vien:\n");
    printf("Ho va ten: %s\n", HoVaTen);
    printf("MSSV: %s\n", MSSV);
    printf("Nam sinh: %hu\n", Namsinh);
    printf("Tuoi: %d\n", 2026 - Namsinh);
    printf("Diem Toan: %d\n", toan);
    printf("Diem Ly: %d\n", ly);
    printf("Diem Hoa: %d\n", hoa);
    printf("Diem trung binh: %.2f\n", (toan + ly + hoa) / 3.0);
    return 0;

}
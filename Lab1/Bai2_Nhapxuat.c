#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char hoVaTen[50];
char MSSV[10];
short namSinh, tuoi;
float diemTB;
int main() {
	printf("Nhap ho va ten: ");
	scanf(" %[^\n]", hoVaTen);//gap ky tu xuong dong nen dung %[^\n] de nhap chuoi co khoang trang
	printf("Nhap MSSV: ");
	scanf("%s", MSSV);
	printf("Nhap nam sinh: ");
	scanf("%hu", &namSinh);
	printf("Nhap diem trung binh: ");
	scanf("%f", &diemTB);
	//xuat thong tin sinh vien
	printf("\nThong tin sinh vien:\n");
	printf("Ho va ten: %s\n", hoVaTen);
	printf("MSSV: %s\n", MSSV);
	printf("Nam sinh: %hu\n", namSinh);
	printf("Tuoi: %hu\n", 2026 - namSinh);
	printf("Diem trung binh: %.2f\n", diemTB);
	return 0;
}
#include <stdio.h>
#define PI 3.14159
int main (){
    //tính chu vi và diện tích hình chữ nhật
    double dai, rong, chuVi, dienTich;
    printf("Nhap chieu dai: ");
    scanf("%lf", &dai);
    printf("Nhap chieu rong: ");
    scanf("%lf", &rong);
    chuVi = 2 * (dai + rong);
    dienTich = dai * rong;
    printf("Chu vi hinh chu nhat la: %.2lf\n", chuVi);
    printf("Dien tich hinh chu nhat la: %.2lf\n", dienTich);

    //tính chu vi và diện tích hình tròn
    double banKinh, chuVi_tron, dienTich_tron;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%lf", &banKinh);
    chuVi_tron = 2 * PI * banKinh;
    dienTich_tron = PI * banKinh * banKinh;
    printf("\nChu vi hinh tron la: %.2lf\n", chuVi_tron);
    printf("Dien tich hinh tron la: %.2lf\n", dienTich_tron);
    printf("\nChu vi hinh tron la: %.2lf\n", banKinh * 2 * PI);
    printf("Dien tich hinh tron la: %.2lf\n", banKinh * banKinh * PI);
    return 0;
}
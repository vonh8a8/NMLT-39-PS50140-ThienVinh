#include <stdio.h>
int main (){
    double dai, rong, chuvi, dientich;
    printf("Nhap chieu dai: ");
    scanf("%lf", &dai);
    printf("Nhap chieu rong: ");
    scanf("%lf", &rong);
    chuvi = 2 * (dai + rong);
    dientich = dai * rong;
    printf("Chu vi hinh chu nhat la: %.2lf\n", chuvi);
    printf("Dien tich hinh chu nhat la: %.2lf\n", dientich);

    return 0;
}
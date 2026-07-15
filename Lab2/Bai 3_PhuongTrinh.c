#include <stdio.h>
int main() {
    //gia su a !=0
    int a,b;
    float x;
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);
    x = 1.0*-b/a;
    printf("Nghiem cua phuong trinh %dx + %d = 0 la: %.2f\n", a, b, x);
    return 0;
}
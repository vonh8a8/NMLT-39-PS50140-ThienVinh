#include <stdio.h>
#include <math.h>
//giai phuong trinh bac 2
int main() {
    int a,b,c;
    float x1,x2,delta;
    printf("Nhap a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    delta = b*b - 4*a*c;
    if(delta < 0) {
        printf("Phuong trinh vo nghiem.\n");
    } else if(delta == 0) {
        x1 = -b/(2.0*a);
        printf("Phuong trinh co nghiem kep: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta))/(2.0*a);
        x2 = (-b - sqrt(delta))/(2.0*a);
        printf("Phuong trinh co 2 nghiem phan biet: %.2f va %.2f\n", x1, x2);
    }
    return 0;
}
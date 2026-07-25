#include <stdio.h>
int main() {
    int a,b;
    float x;
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);
    int c = 1;
    while(c==1) {
        if(a != 0) {
        x = 1.0*-b/a;
        printf("Nghiem cua phuong trinh %dx + %d = 0 la: %.2f\n", a, b, x);
    } else {
        if(b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }
    printf("Tiep tuc giai phuong trinh bac 1? (1: co, 0: khong): ");
    scanf("%d", &c);
    if(c==1){
        continue;
    } else {
        break;
    }
}
    return 0;
}
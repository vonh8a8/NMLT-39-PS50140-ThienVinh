#include <stdio.h>
int main()
{
    int n, m, l, k, a, b, c, s, t;
    double d, tong;
    // in cac so tu 0 - 10
    /* printf("Cac so tu 0 - 10:\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d\t", i);
    } */
    // in cac so chan tu 1 - 10
    /* printf("\nCac so chan tu 1 - 10: (Giam so lan lap)\n");
    for (int i = 2; i <= 10; i += 2)
    {
        printf("%d\t", i);
    } */
    // in cac so chia het cho 3 tu 1 - 100
    /* printf("\nCac so chia het cho 3 tu 1 - 100:\n");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\t", i);
        }
    } */
    // in cac so chia het cho 3 tu n - m
    /* printf("\nNhap n: ");
    scanf("%d", &n);
    printf("Nhap m: ");
    scanf("%d", &m);
    printf("Cac so chia het cho 3 tu %d - %d:\n", n, m);
    if(n > m)
    {
        printf("Nhap lai n va m sao cho n <= m\n");
        return 1;
    }else{
        for (int i = n; i <= m; i++)
            {
                if (i % 3 == 0)
                {
                printf("%d\t", i);
                }
            }
        }  */
    // in boi cua a va b
    /* printf("\nNhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Cac boi cua %d va %d tu 1 - 100:\n", a, b);
    for (int i = 1; i <= 100; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("%d\t", i);
        }
    } */
    // in bang cuu chuong cua a
    /* printf("Nhap so tu 1 - 10 de tinh bang cuu chuong: \n");
    scanf("%d", &c);
    printf("\nBang cuu chuong cua %d:\n", c);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d\t = %d\n", c, i, c * i);
    } */
    // in tong so hat gao trong ban co vua
    d = 1;
    tong = 0;
    for (int i = 1; i <= 64; i++)
    {
        tong += d;
        printf("So hat gao trong ban co vua lan %d la: %.0lf, tong: %.0lf\n", i, d, tong);
        d *= 2;
    }
    printf("Tong so hat gao trong ban co vua: %.0lf\n", tong);
    // tinh s = 3 + 6 + 9 + ...  sao cho s <=  100
    s = 0;
    t = 1;
    while (s <= 100)
    {
        if (s + 3 * t > 100)
        {
            break;
        }
        else
        {
            s += 3 * t;
            t++;
        }
    }
    printf("Tong nho hon 100: %d\n", s);
    return 0;
}
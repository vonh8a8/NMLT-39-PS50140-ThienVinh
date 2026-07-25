#include <stdio.h>
#include <math.h>
int main()
{
    int chon, a, b, c, d;
    int bac1, bac2, bac3, bac4, bac5, bac6;
    float t, x1, x2, delta;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|                    MENU CHUONG TRINH              |\n");
        printf("+---------------------------------------------------+\n");
        printf("|  0. Thoat chuong trinh                            |\n");
        printf("|  1. Kiem tra so nguyen                            |\n");
        printf("|  2. Tim uoc so chung va boi so chung cua 2 so     |\n");
        printf("|  3. Chuong trinh tinh tien cho quan Karaoke       |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Chon chuc nang cua ban (0-3): ");
        scanf("%d", &chon);
        switch (chon)
        {
        case 0:
            printf("Ban chon chuc nang 0: Thoat chuong trinh\n");
            break;
        case 1:
            printf("Ban chon chuc nang 1: Kiem tra so nguyen\n");
            printf("Nhap mot so nguyen: ");
            scanf("%d", &a);
            break;
        case 2:
            printf("Ban chon chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
            printf("Nhap hai so nguyen: ");
            scanf("%d%d", &a, &b);
            
            break;
        case 3:
            printf("Ban chon chuc nang 3: Chuong trinh tinh tien cho quan Karaoke\n");
            // Implementation for karaoke billing would go here
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0);
    return 0;
}
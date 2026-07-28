#include <stdio.h>
#include <math.h>
int main()
{
    int chon, a, b, c, d;
    do
    {
        printf("+---------------------------------------------------+\n");
        printf("|                    MENU CHUONG TRINH              |\n");
        printf("+---------------------------------------------------+\n");
        printf("|  0. Thoat chuong trinh                            |\n");
        printf("|  1. Kiem tra so nguyen                            |\n");
        printf("|  2. Tim uoc so chung va boi so chung cua 2 so     |\n");
        printf("|  3. Chuong trinh tinh tien cho quan Karaoke       |\n");
        printf("|  4. Tinh tien dien                                |\n");
        printf("|  5. Doi tien                                      |\n");
        printf("|  6. Tinh lai suat vay ngan hang vay tra gop       |\n");
        printf("|  7. Vay tien mua xe                               |\n");
        printf("|  8. Sap xep thong tin nhan vien                   |\n");
        printf("|  9. Game FPOLY - LOTT (2/15)                      |\n");
        printf("|  10. Tinh toan phan so                            |\n");
        printf("+---------------------------------------------------+\n");
        printf(">> Chon chuc nang cua ban (0-10): ");
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
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 3\n");
            break;
        }
    } while (chon != 0);
    return 0;
}
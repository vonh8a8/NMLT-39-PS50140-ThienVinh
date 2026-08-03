#include <stdio.h>
#include <math.h>
void yeuCau1();
int UCLN(int a, int b);
int BCNN(int a, int b);
void yeuCau2();
void yeuCau3();
void yeuCau4();
void yeuCau5();
void yeuCau6();
void yeuCau7();
void yeuCau8();
void yeuCau9();
void yeuCau10();
int main()
{
    int chon;
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
            yeuCau1();
            break;
        case 2:
            yeuCau2();
            break;
        case 3:
            yeuCau3();
            break;
        case 4:
            yeuCau4();
            break;
        case 5:
            yeuCau5();
            break;
        case 6:
            yeuCau6();
            break;
        case 7:
            yeuCau7();
            break;
        case 8:
            yeuCau8();
            break;
        case 9:
            yeuCau9();
            break;
        case 10:
            yeuCau10();
            break;
        default:
            printf("Ban phai chon chuc nang 0 - 10\n");
            break;
        }
    } while (chon != 0);
    return 0;
}
void yeuCau1()
{
    float n;
    printf("Ban chon chuc nang 1: Kiem tra so nguyen\n");
    printf("Nhap mot so nguyen: ");
    scanf("%f", &n);
    if (n == (int)n)
    {
        printf("So %f la so nguyen\n", n);
    }
    else
    {
        printf("So %.0f khong phai la so nguyen\n", n);
        printf("So %.0f khong la so nguyen to\n", n);
        printf("So %.0f khong la so chinh phuong\n", n);
        goto ketThuc2;
    }
    if (n <= 1)
    {
        printf("So %.0f khong phai la so nguyen to\n", n);
    }
    else
    {
        for (int i = 2; i <= (int)n / 2; i++)
        {
            if ((int)n % i == 0)
            {
                printf("So %.0f khong phai la so nguyen to\n", n);
                goto ketThuc;
            }
        }
        printf("So %.0f la so nguyen to\n", n);
    }
ketThuc:
    if (n < 0)
    {
        printf("So %.0f khong phai la so chinh phuong\n", n);
    }
    else
    {
        for (int i = 0; i * i <= (int)n; i++)
        {
            if (i * i == (int)n)
            {
                printf("So %.0f la so chinh phuong\n", n);
                goto ketThuc2;
            }
        }
        printf("So %.0f khong phai la so chinh phuong\n", n);
    }
ketThuc2:
}

int UCLN(int a, int b)
{
    int ucln;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    ucln = a;
    return ucln;
}

int BCNN(int a, int b)
{
    int bcnn = (a * b) / UCLN(a, b);
    return bcnn;
}

void yeuCau2()
{
    float a, b;
    printf("Ban chon chuc nang 2: Tim uoc so chung va boi so chung cua 2 so\n");
    printf("Nhap hai so nguyen a va b: ");
    scanf("%f%f", &a, &b);
    while (a != (int)a || b != (int)b)
    {
        printf("Vui long nhap hai so nguyen!\n");
        printf("Nhap hai so nguyen a va b: ");
        scanf("%f%f", &a, &b);
    }
    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", (int)b, (int)a, UCLN((int)a, (int)b));
    printf("Boi so chung nho nhat cua %d va %d la: %d\n", (int)a, (int)b, BCNN((int)a, (int)b));
}

void yeuCau3()
{
    // Blet rang:
    //  Giá tiền 3 giờ đầu là 150000, bắt đầu giờ thứ 4 giảm 30%.
    //  | Quán chỉ hoạt động trong khoảng giờ từ 12 giờ ) 23 giờ.
    //  Nếu giờ bắt đầu trong khoảng 14 – 17 thì giảm tiếp 10% tổng
    //  | tiền thanh toán
    int s, e, tien;
    printf("\nBan chon chuc nang 3: tinh tien dien cho quan karaoke\n");
    printf("\nNhap gio vao: ");
    scanf("%d", &s);
    printf("\nNhap gio ra: ");
    scanf("%d", &e);
    while (s < 12 || e > 23 || s >= e)
    {
        printf("Vui long nhap lai gio vao va gio ra (12-23)!\n");
        printf("\nNhap gio vao: ");
        scanf("%d", &s);
        printf("\nNhap gio ra: ");
        scanf("%d", &e);
    }
    int gio = e - s;
    if (gio <= 3)
    {
        tien = gio * 150000;
    }
    else
    {
        tien = 150000 * 3 + (gio - 3) * 150000 * 0.7;
    }
    // sau khi tinh tien roi moi xet dieu kien giam 10% neu gio vao trong khoang 14-17
    if (s >= 14 && s <= 17)
    {
        tien = tien * 0.9;
    }
    printf("\nSo tien phai tra la: %d vnd\n", tien);
}
void yeuCau4()
{
    int kwh, tien;
    printf("\nBan chon chuc nang 4: tinh tien dien\n");
    printf("\nNhap so kWh tieu thu: ");
    scanf("%d", &kwh);
    while (kwh < 0)
    {
        printf("Vui long nhap lai so kWh tieu thu (>=0)!\n");
        printf("\nNhap so kWh tieu thu: ");
        scanf("%d", &kwh);
    }
    if (kwh <= 50)
    {
        tien = kwh * 1678;
    }
    else if (kwh <= 100)
    {
        tien = 50 * 1678 + (kwh - 50) * 1734;
    }
    else if (kwh <= 200)
    {
        tien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
    }
    else if (kwh <= 300)
    {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
    }
    else if (kwh <= 400)
    {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh - 300) * 2834;
    }
    else
    {
        tien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh - 400) * 2927;
    }
    printf("\nSo tien phai tra la: %d vnd\n", tien);
}

void yeuCau5()
{
}

void yeuCau6()
{
}

void yeuCau7()
{
}

void yeuCau8()
{
}

void yeuCau9()
{
}

void yeuCau10()
{
}

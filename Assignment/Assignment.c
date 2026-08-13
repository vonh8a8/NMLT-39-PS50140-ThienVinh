#include <stdio.h>
#include <math.h>
void yeuCau1();
int UCLN(int a, int b);
int BCNN(int a, int b);
void yeuCau2();
void yeuCau3();
void yeuCau4();
struct giaDien
{
    int mucTieuThu;
    int gia;
};
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
        printf("=> Chon chuc nang cua ban (0-10): ");
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
            printf("Ban phai chon chuc nang 0 - 10!\n");
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
//==================================================================
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
//==================================================================
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
//==================================================================
void yeuCau3()
{
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
//==================================================================
void yeuCau4()
{
    int soKW, tongTien = 0;
    struct giaDien bangGiaDien[6] = {
        {50, 1678},
        {100, 1734},
        {200, 2014},
        {300, 2536},
        {400, 2834},
        {401, 2927}};
    printf("\nBan chon chuc nang 4: tinh tien dien\n");
    printf("\nNhap so kWh tieu thu: ");
    scanf("%d", &soKW);
    while (soKW < 0)
    {
        printf("Vui long nhap lai so kWh tieu thu (>=0)!\n");
        printf("\nNhap so kWh tieu thu: ");
        scanf("%d", &soKW);
    }
    if (soKW <= bangGiaDien[0].mucTieuThu)
    {
        tongTien = soKW * bangGiaDien[0].gia;
    }
    else if (soKW <= bangGiaDien[1].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + (soKW - 50) * bangGiaDien[1].gia;
    }
    else if (soKW <= bangGiaDien[2].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + (soKW - 100) * bangGiaDien[2].gia;
    }
    else if (soKW <= bangGiaDien[3].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + (soKW - 200) * bangGiaDien[3].gia;
    }
    else if (soKW <= bangGiaDien[4].mucTieuThu)
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + 100 * bangGiaDien[3].gia + (soKW - 300) * bangGiaDien[4].gia;
    }
    else
    {
        tongTien = 50 * bangGiaDien[0].gia + 50 * bangGiaDien[1].gia + 100 * bangGiaDien[2].gia + 100 * bangGiaDien[3].gia + 100 * bangGiaDien[4].gia + (soKW - 400) * bangGiaDien[5].gia;
    }
    printf("\nSo tien phai tra la: %d vnd\n", tongTien);
}
//==================================================================
void yeuCau5()
{
    int tien;
    int menhGia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int soTo[9];
    int i;
    printf("\nBan chon chuc nang 5: doi tien\n");
    printf("\nNhap so tien can doi: ");
    scanf("%d", &tien);
    while (tien < 0)
    {
        printf("Vui long nhap lai so tien can doi (>=0)!\n");
        printf("\nNhap so tien can doi: ");
        scanf("%d", &tien);
    }
    for (i = 0; i < 9; i++)
    {
        soTo[i] = tien / menhGia[i]; // Tính số tờ tiền của mỗi mệnh giá
        tien = tien % menhGia[i];    // Cập nhật số tiền còn lại sau khi đổi tờ tiền của mệnh giá hiện tại
    }
    for (i = 0; i < 9; i++)
    {
        if (soTo[i] > 0)
        {
            printf("%3d to %6d vnd\n", soTo[i], menhGia[i]);
        }
    }
    if (tien > 0)
    {
        printf(">> So tien con lai khong doi duoc la: %d vnd\n", tien);
    }
}
//==================================================================
void yeuCau6()
{
    int tienVay, thang = 12;
    float laiSuat = 0.05, tienLai, tienGoc, tienConLai;
    printf("\nBan chon chuc nang 6: tinh lai suat vay ngan hang vay tra gop\n");
    printf("\nNhap so tien vay: ");
    scanf("%d", &tienVay);
    printf("\nBANG TINH TIEN GOP MOI THANG:\n");
    printf("\n");
    printf("+---------------+-----------------------+-----------------------+-----------------------+-------------------------------+\n");
    printf("| Ky han        | Lai phai tra          | Goc phai tra          | Tien tra              | So tien con lai               |\n");
    printf("+---------------+-----------------------+-----------------------+-----------------------+-------------------------------+\n");
    tienGoc = tienVay / thang;
    tienConLai = tienVay;
    for (int i = 1; i <= thang; i++)
    {
        // tienLai = tienConLai * laiSuat;
        // tienConLai = tienConLai - tienGoc;
        tienLai = tienVay * laiSuat;
        tienVay = tienVay - tienGoc;
        printf("| %d\t\t| %8d\t\t| %8d\t\t| %8d\t\t| %9d\t\t\t|\n", i, (int)tienLai, (int)tienGoc, (int)tienGoc + (int)tienLai, (int)tienVay);
        printf("+---------------+-----------------------+-----------------------+-----------------------+-------------------------------+\n");
    }
    // lai phai tra = tienVay * laiSuat
    // goc phai tra = tienVay / thang
    // tien tra = lai phai tra / thang + goc phai tra
}

void yeuCau7()
{
    int tienVay = 500000000;
    int thang = 24 * 12;
    float laiSuatNam = 0.072;
    float laiSuatThang = laiSuatNam / 12;
    float tienLai, tienGoc, tienTra, tienConLai;
    printf("\nBan chon chuc nang 7: vay tien mua xe\n");
    printf("\nNhap so phan tram vay toi da (0-100): ");
    int phanTramVay;
    scanf("%d", &phanTramVay);
    while (phanTramVay < 0 || phanTramVay > 100)
    {
        printf("Vui long nhap lai so phan tram vay toi da (0-100)!\n");
        printf("\nNhap so phan tram vay toi da (0-100): ");
        scanf("%d", &phanTramVay);
    }
    // int tienTraTruoc = tienVay * ((100 - phanTramVay) / 100);
    int tienTraTruoc = tienVay - tienVay * (phanTramVay / 100);
    // int tienVayNganHang = tienVay - tienTraTruoc; // tienTraTruoc
    int tienVayThucTe = tienVay * phanTramVay / 100;
    printf("\nSo tien phai tra lan dau: %d vnd\n", tienTraTruoc);
    printf("\nBANG TINH TIEN GOP MOI THANG:\n");
    printf("\n");
    printf("+---------------+-----------------------+-----------------------+-----------------------+-------------------------------+\n");
    printf("| Ky han        | Lai phai tra          | Goc phai tra          | Tien tra              | So tien con lai               |\n");
    printf("+---------------+-----------------------+-----------------------+-----------------------+-------------------------------+\n");
    tienConLai = tienVayThucTe;
    for (int i = 1; i <= thang; i++)
    {
        tienLai = tienConLai * laiSuatThang;
        tienGoc = tienVayThucTe / thang;
        tienConLai = tienConLai - tienGoc;
        tienTra = tienGoc + tienLai;
        printf("| %d\t\t| %8d\t\t| %8d\t\t| %8d\t\t| %9d\t\t\t|\n", i, (int)tienLai, (int)tienGoc, (int)tienTra, (int)tienConLai);
        printf("+---------------+-----------------------+-----------------------+-----------------------+-------------------------------+\n");
    }
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

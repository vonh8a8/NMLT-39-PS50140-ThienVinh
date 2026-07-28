#include <stdio.h>
int tong1();
int tong2(int a, int b);
void tong3();
void tong4(int a, int b);
void hoanVi(int *a, int *b);
float tinhTrungBinh(float toan, float ly, float hoa);
const char *xepLoai(float diem);
int main()
{
    // int x = 7, y = 3;
    // printf("Truoc khi hoan vi: x = %d\t y = %d\n", x, y);
    // hoanVi(&x, &y);
    // printf("Sau khi goi ham hoan vi: x = %d\t y = %d\n", x, y);
    float toan, ly, hoa;
    int a;
    do
    {
        printf("Nhap diem toan: ");
        scanf("%f", &toan);
        printf("Nhap diem ly: ");
        scanf("%f", &ly);
        printf("Nhap diem hoa: ");
        scanf("%f", &hoa);
        printf("Diem trung binh cua 3 mon la: %.2f\n", tinhTrungBinh(toan, ly, hoa));
        printf("Xep loai cua hoc sinh la: %s\n", xepLoai(tinhTrungBinh(toan, ly, hoa)));
        printf("Ban co muon tiep tuc nhap diem khong? (1: Co, 0: Khong): ");

        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }
    } while (a == 1);
    return 0;
}
// void hoanVi(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//     printf("Sau khi hoan vi: a = %d\t b = %d\n", *a, *b);
// }

float tinhTrungBinh(float toan, float ly, float hoa)
{
    return (toan + ly + hoa) / 3.0f;
}

const char *xepLoai(float diem)
{
    if (diem >= 8.5)
        return "Gioi";
    else if (diem >= 6.5f)
        return "Kha";
    else if (diem >= 5.0f)
        return "Trung binh";
    else
        return "Yeu";
}

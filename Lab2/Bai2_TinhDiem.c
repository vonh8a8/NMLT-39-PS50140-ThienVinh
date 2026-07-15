#include <stdio.h>
int main() {
    //tính điểm trung bình
    int diemToan, diemLy, diemHoa;
    printf("Nhap diem Toan, Ly, Hoa: ");
    scanf("%d %d %d", &diemToan, &diemLy, &diemHoa);
    float diemTrungBinh = (diemToan*3 + diemLy*2 + diemHoa) / 6.0;
    printf("Diem toan: %d, Diem ly: %d, Diem hoa: %d, Diem trung binh la: %.2lf\n", diemToan, diemLy, diemHoa, diemTrungBinh);
    return 0;
}
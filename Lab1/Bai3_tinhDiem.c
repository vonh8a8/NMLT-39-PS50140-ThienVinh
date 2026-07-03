#include <stdio.h>
int main() {
	
	float diemTB, diemToan, diemLy, diemHoa;
	printf("Nhap diem Toan: ");
	scanf("%f", &diemToan);
	printf("Nhap diem Ly: ");
	scanf("%f", &diemLy);
	printf("Nhap diem Hoa: ");
	scanf("%f", &diemHoa);
	diemTB = (diemToan + diemLy + diemHoa) / 3.0;// ep kieu tu so nguyen sang so thuc
	printf("Diem trung binh: %.2f\n", diemTB);
	return 0;

}
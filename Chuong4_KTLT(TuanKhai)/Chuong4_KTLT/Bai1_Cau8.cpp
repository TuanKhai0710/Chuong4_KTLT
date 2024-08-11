#include <stdio.h>

int triangularNumber(int k) {
	return k * (k + 1) / 2;
}

// Hàm đệ quy để tính S(n)
int Sn(int n) {
	if (n == 1) {
		return 1; // Trường hợp cơ sở: S(1)
	}
	return triangularNumber(n) + Sn(n - 1);
}
//khu de quy 
double khuSn(int n) {
	int result = 0;
	for (int k = 1; k <= n; k++) {
		result += k * (k + 1) / 2; // Tính số tam giác và cộng dồn vào kết quả
	}
	return result;
}
int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("Vui long nhap mot so nguyen duong.\n");
		return 1;
	}

	double result = Sn(n);
	printf("S(%d) = %.5f\n", n, result);

	double result2 = khuSn(n);
	printf("Ket qua khu de quy: S(%d) = %.5f\n", n, result2);

	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}
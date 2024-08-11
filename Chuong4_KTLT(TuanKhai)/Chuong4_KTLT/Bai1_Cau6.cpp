#include <stdio.h>

double Sn(int n) {
	if (n == 1) {
		return 1.0 / (1 * 2 * 3); // Trường hợp cơ sở: S(1)
	}
	return 1.0 / (n * (n + 1) * (n + 2)) + Sn(n - 1);
}

//khu de quy 
double khuSn(int n) {
	double result = 0.0;
	for (int i = 1; i <= n; i++) {
		result += 1.0 / (i * (i + 1) * (i + 2));
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
#include <stdio.h>

// Hàm đệ quy để tính Xn
int Bai16(int n) {
	if (n == 1 || n == 2) {
		return 1; // Điều kiện cơ sở
	}
	return Bai16(n - 1) + (n - 1) * Bai16(n - 2);
}
int khuDeQuy(int n) {
	if (n == 1 || n == 2) {
		return 1; // Điều kiện cơ sở
	}

	int Xn_1 = 1; // X_2
	int Xn_2 = 1; // X_1
	int Xn = 0;

	for (int i = 3; i <= n; i++) {
		Xn = Xn_1 + (i - 1) * Xn_2;
		Xn_2 = Xn_1; // Cập nhật X_{n-2}
		Xn_1 = Xn;   // Cập nhật X_{n-1}
	}

	return Xn;
}
int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);

	if (n < 1) {
		printf("Vui long nhap so nguyen duong lon hon 1.\n");
		return 1;
	}

	int result = Bai16(n);
	printf("X%d = %d (De quy)\n", n, result);

	int result1 = khuDeQuy(n);
	printf("X%d = %d (khong de quy)\n", n, result1);

	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

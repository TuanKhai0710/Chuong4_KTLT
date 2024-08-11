#include <stdio.h>

// Hàm tính m^n bằng phương pháp đệ quy
long long bai2(int m, int n) {
	if (n == 0) {
		return 1; // m^0 = 1
	}
	else if (n % 2 == 0) {
		long long half = bai2(m, n / 2);
		return half * half;
	}
	else {
		return m * bai2(m, n - 1);
	}
}

int main() {
	int m, n;
	printf("Nhap so nguyen duong m: ");
	scanf_s("%d", &m);
	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);

	if (n < 0) {
		printf("n phai la so nguyen duong.\n");
		return 1;
	}

	long long result = bai2(m, n);
	printf("%d^%d = %lld\n", m, n, result);
	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

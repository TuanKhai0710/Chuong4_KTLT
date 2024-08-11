#include <stdio.h>

// Hàm đệ quy để tính A_n
int tinhAn(int n) {
	if (n == 1) {
		return 1; // Điều kiện cơ sở
	}

	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum += tinhAn(i); // Tính tổng các số hạng trước đó
	}

	return n * sum; // Tính A_n
}

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);

	if (n < 1) {
		printf("Vui long nhap mot so nguyen duong.\n");
		return 1;
	}

	int result = tinhAn(n);
	printf("A%d = %d\n", n, result);
	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

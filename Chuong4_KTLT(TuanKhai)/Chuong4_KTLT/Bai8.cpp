#include <stdio.h>

// Kích thước tối đa của mảng ghi nhớ
#define MAX_SIZE 10

// Hàm tính giá trị của f(n) với ghi nhớ
int f(int n, int memo[]) {
	// Trường hợp cơ bản
	if (n == 1) {
		return 1;
	}

	// Kiểm tra nếu giá trị đã được tính trước đó
	if (memo[n] != -1) {
		return memo[n];
	}

	// Tính giá trị của f(n) theo công thức đệ quy
	if (n % 2 == 0) {  // n là số chẵn
		memo[n] = 2 * f(n / 2, memo);
	}
	else {  // n là số lẻ
		memo[n] = 2 * f(n / 2, memo) + 3 * f((n / 2) + 1, memo);
	}

	return memo[n];
}

int main() {
	int n1 = 5;  // Giá trị cần tính f(5)
	int n;
	int memo[MAX_SIZE];
	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);

	if (n < 1 || n >= MAX_SIZE) {
		printf("n phai la so nguyen duong va nho hon %d.\n", MAX_SIZE);
		return 1;
	}
	// Khởi tạo mảng ghi nhớ với giá trị -1 (chưa tính toán)
	for (int i = 0; i < MAX_SIZE; i++) {
		memo[i] = -1;
	}

	// Tính giá trị của f(5)
	int result = f(n1, memo);
	printf("f(%d) = %d\n", n1, result);
	// Tính giá trị của f(n)
	int result1 = f(n, memo);
	printf("f(%d) = %d\n", n, result1);
	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

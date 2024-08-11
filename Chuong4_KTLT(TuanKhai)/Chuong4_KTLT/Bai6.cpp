#include <stdio.h>

// Kích thước tối đa của mảng ghi nhớ
#define MAX_SIZE 10

// Hàm tính giá trị của Un với ghi nhớ
int findUn(int memo[], int n) {
	// Trường hợp cơ bản
	if (n < 6) {
		return n;
	}

	// Kiểm tra nếu giá trị đã được tính trước đó
	if (memo[n] != -1) {
		return memo[n];
	}

	// Tính giá trị của Un
	memo[n] = findUn(memo, n - 5) + findUn(memo, n - 4) + findUn(memo, n - 3) + findUn(memo, n - 2) + findUn(memo, n - 1);

	return memo[n];
}

int main() {
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

	// Tính giá trị của Un
	int result = findUn(memo, n);
	printf("U(%d) = %d\n", n, result);

	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

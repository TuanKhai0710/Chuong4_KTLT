#include <stdio.h>

// Hàm tính số Fibonacci thứ i
int fibonacci(int i) {
	if (i <= 1) {
		return i;  // F(0) = 0, F(1) = 1
	}
	return fibonacci(i - 1) + fibonacci(i - 2);
}

// Hàm tìm số Fibonacci lớn nhất nhỏ hơn n
int bai12(int n) {
	int i = 0;
	int fib = 0;

	// Tìm số Fibonacci lớn nhất nhỏ hơn n
	while (1) {
		int nextFib = fibonacci(i);
		if (nextFib >= n) {
			break;
		}
		fib = nextFib;
		i++;
	}

	return fib;
}
// Hàm tìm số Fibonacci lớn nhất nhỏ hơn n không dùng đệ quy
int khuDeQuy(int n) {
	int a = 0, b = 1;
	int fib = 0;

	// Tìm số Fibonacci lớn nhất nhỏ hơn n
	while (b < n) {
		fib = b;
		int next = a + b;
		a = b;
		b = next;
	}

	return fib;
}
int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);

	int result1 = bai12(n);
	printf("So Fibonacci lon nhat nhung nho hon %d la %d (de quy).\n", n, result1);

	int result = khuDeQuy(n);
	printf("So Fibonacci lon nhat nhung nho hon %d la %d (khong de quy).\n", n, result);
	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

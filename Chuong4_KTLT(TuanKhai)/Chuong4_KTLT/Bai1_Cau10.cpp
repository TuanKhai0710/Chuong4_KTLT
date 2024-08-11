#include <stdio.h>
#include <math.h>

// Tính giá trị của S(n) một cách trực tiếp trong vòng lặp
double iterativeS(int n) {
	double result = 0.0;
	long long fact = 1; // Tính giai thừa một cách tích lũy
	for (int i = 1; i <= n; i++) {
		fact *= (i + 1); // Cập nhật giai thừa cho (i+1)!
		double denominator = (i + 1) + sqrt((double)(i + 2)); // Chuyển đổi int thành double
		result += (i * fact) / denominator;
	}
	return result;
}

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf_s("%d", &n);

	if (n < 1) {
		printf("Vui long nhap mot so nguyen duong.\n");
		return 1;
	}

	double result = iterativeS(n);
	printf("S(%d) = %.5f\n", n, result);

	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

#include <stdio.h>

// Hàm tính giá trị phần tử thứ n của cấp số cộng
int bai4(int a, int r, int n) {
	if (n < 1) {
		printf("n phai la so duong.\n");
		return -1; // Trả về -1 để chỉ lỗi
	}
	return a + (n - 1) * r;
}

int main() {
	int a, r, n;

	// Nhập giá trị từ người dùng
	printf("Nhap hang dau (a): ");
	scanf_s("%d", &a);
	printf("Nhap cong sai (r): ");
	scanf_s("%d", &r);
	printf("Nhap chi so phan tu can tim (n): ");
	scanf_s("%d", &n);

	// Tính giá trị phần tử thứ n
	int result = bai4(a, r, n);
	if (result != -1) {
		printf("Gia tri phan tu thu %d la: %d\n", n, result);
	}
	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

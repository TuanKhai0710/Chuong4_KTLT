#include <stdio.h>
#include <stdlib.h>

// Hàm tìm kiếm nhị phân đệ quy
int binarySearch(int a[], int left, int right, int x) {
	if (left > right) {
		return -1; // Không tìm thấy
	}

	int mid = left + (right - left) / 2; // Tính chỉ số giữa để tránh tràn số nguyên

	if (a[mid] == x) {
		return mid; // Tìm thấy x tại chỉ số mid
	}
	else if (a[mid] > x) {
		return binarySearch(a, left, mid - 1, x); // Tìm trong nửa trái
	}
	else {
		return binarySearch(a, mid + 1, right, x); // Tìm trong nửa phải
	}
}

int main() {
	int n, x;

	printf("Nhap so phan tu cua mang: ");
	scanf_s("%d", &n);

	// Sử dụng malloc để cấp phát mảng động
	int *a = (int *)malloc(n * sizeof(int));
	if (a == NULL) {
		printf("Khong the cap phat bo nho.\n");
		return 1;
	}

	printf("Nhap cac phan tu cua bang da sap xep: \n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}

	printf("Nhap so can tim: ");
	scanf_s("%d", &x);

	int result = binarySearch(a, 0, n - 1, x);

	if (result != -1) {
		printf("Tim thay %d tai vi tri %d.\n", x, result);
	}
	else {
		printf("Khong tim thay %d trong mang.\n", x);
	}

	// Giải phóng bộ nhớ đã cấp phát
	free(a);
	printf("Nhan Enter de ket thuc chuong trinh...\n");
	getchar(); // Đọc ký tự Enter còn lại từ buffer
	getchar(); // Chờ người dùng nhấn Enter 
	return 0;
}

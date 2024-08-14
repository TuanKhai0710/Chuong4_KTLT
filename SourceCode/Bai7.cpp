#include <stdio.h>

// Ham tinh gia tri so hang thu n cua day so theo cong thuc 1
int tinhDay1(int n) {
    // Dieu kien co so
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;

    // De quy tinh toan
    return 2 * tinhDay1(n - 1) - 3 * tinhDay1(n - 2) - tinhDay1(n - 3);
}

// Ham tinh gia tri so hang thu n cua day so theo cong thuc 2
int tinhDay2(int n) {
    // Dieu kien co so
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;

    // De quy tinh toan
    return tinhDay2(n - 1) + 2 * tinhDay2(n - 2) + 3 * tinhDay2(n - 3);
}

int main() {
    int n, loaiDay;
    
    printf("Nhap loai day (1 hoac 2): ");
    scanf("%d", &loaiDay);

    printf("Nhap chi so n: ");
    scanf("%d", &n);

    if (n < 0 || (loaiDay == 2 && n < 1)) {
        printf("Chi so n phai la so nguyen duong (n >= 0 cho day 1, n >= 1 cho day 2).\n");
        return 1;
    }

    int ketQua;
    if (loaiDay == 1) {
        ketQua = tinhDay1(n);
    } else if (loaiDay == 2) {
        ketQua = tinhDay2(n);
    } else {
        printf("Loai day khong hop le.\n");
        return 1;
    }

    printf("Gia tri cua so hang thu %d la: %d\n", n, ketQua);

    return 0;
}


#include <stdio.h>

// Ham tinh gia tri phan tu thu n cua cap so nhan
double tinhPhanTu(int n, double a, double q) {
    // Dieu kien dung: khi n = 1
    if (n == 1) {
        return a;
    }
    // De quy: khi n > 1
    return q * tinhPhanTu(n - 1, a, q);
}

int main() {
    int n;
    double a, q;

    // Nhap gia tri cua hang dau (a)
    printf("Nhap gia tri cua hang dau (a): ");
    scanf("%lf", &a);

    // Nhap gia tri cua cong boi (q)
    printf("Nhap gia tri cua cong boi (q): ");
    scanf("%lf", &q);

    // Nhap chi so phan tu thu n
    printf("Nhap chi so phan tu thu n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Chi so phan tu phai lon hon 0.\n");
        return 1;
    }

    // Tinh gia tri phan tu thu n va in ra
    double giaTri = tinhPhanTu(n, a, q);
    printf("Gia tri cua phan tu thu %d la: %.6f\n", n, giaTri);

    return 0;
}


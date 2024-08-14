#include <stdio.h>

// Ham xuat day so Fibonacci co n so
void xuatDayFibonacci(int n) {
    if (n <= 0) {
        printf("So n phai lon hon 0.\n");
        return;
    }

    // Khai bao mang de luu cac so Fibonacci
    int fibonacci[n];

    // Dieu kien co so
    if (n >= 1) fibonacci[0] = 1;
    if (n >= 2) fibonacci[1] = 1;

    // Tinh toan cac so Fibonacci con lai
    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    // Xuat day so Fibonacci
    printf("Day so Fibonacci co %d so la:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so luong so Fibonacci muon tinh (n): ");
    scanf("%d", &n);

    // Goi ham xuat day so Fibonacci
    xuatDayFibonacci(n);

    return 0;
}


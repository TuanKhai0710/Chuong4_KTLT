#include <stdio.h>

// Khai bao cac ham tinh X va Y theo de quy
int tinhX(int n);
int tinhY(int n);

// Ham tinh gia tri so hang thu n cua day so X theo de quy
int tinhX(int n) {
    // Dieu kien co so
    if (n == 0) return 1;
    if (n == 1) return 1;
    if (n == 2) return 1;

    // De quy tinh toan gia tri
    return tinhX(n - 1) + tinhY(n - 1);
}

// Ham tinh gia tri so hang thu n cua day so Y theo de quy
int tinhY(int n) {
    // Dieu kien co so
    if (n == 0) return 0;
    if (n == 1) return 0;
    if (n == 2) return 0;

    // De quy tinh toan gia tri
    return 3 * tinhX(n - 1) + 2 * tinhY(n - 1);
}

int main() {
    int n;
    
    printf("Nhap chi so n: ");
    scanf("%d", &n);

    // Goi ham tinh X va Y
    if (n < 0) {
        printf("Chi so n phai la so nguyen duong.\n");
        return 1;
    }

    printf("Gia tri so hang thu %d cua day X la: %d\n", n, tinhX(n));
    printf("Gia tri so hang thu %d cua day Y la: %d\n", n, tinhY(n));

    return 0;
}


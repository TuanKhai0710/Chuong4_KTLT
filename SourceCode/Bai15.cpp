#include <stdio.h>

// Ham tinh gia tri so hang thu n cua day so Y theo phuong phap de quy
int tinhY(int n) {
    // Dieu kien co so
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;

    // De quy tinh toan
    return tinhY(n - 1) + 2 * tinhY(n - 2) + 3 * tinhY(n - 3);
}

int main() {
    int n;

    printf("Nhap chi so n (n >= 1): ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Chi so n phai lon hon hoac bang 1.\n");
        return 1;
    }

    // Goi ham tinh Y va in ket qua
    printf("Gia tri so hang thu %d cua day Y la: %d\n", n, tinhY(n));

    return 0;
}


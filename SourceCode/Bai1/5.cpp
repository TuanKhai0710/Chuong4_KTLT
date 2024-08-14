#include <stdio.h>



int S1(int n) {
    if (n == 1) {
        return 1 * 2; // 1 * (1 + 1)
    }
    return n * (n + 1) + S1(n - 1);
}

double tinhGiaTri(int i) {
    return 1.0 / (i * (i + 1) * (i + 2));
}

double S2(int n) {
    if (n == 1) {
        return tinhGiaTri(1);
    }
    return tinhGiaTri(n) + S2(n - 1);
}

int main() {
    int n;
    
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui lòng nhap so nguyen duong lon hon hoac bang 1.\n");
    } else {
    	printf("Ket qua phep tinh bang ham de quy la:\n");
        printf("S(%d) = %d\n", n, S1(n));
        printf("S(%d) = %lf\n", n, S2(n));
    }

    return 0;
}

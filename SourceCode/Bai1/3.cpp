#include <stdio.h>


double S(int n) {
    if (n == 1) {
        return 1.0 / 2.0;
    } else {
        return S(n - 1) + (double)n / (n + 1);
    }
}

int main() {
    int n;
    
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui lòng nhap so nguyen duong lon hon hoac bang 1.\n");
    } else {
    	printf("Ket qua phep tinh bang ham de quy la:\n");
        printf("S(%d) = %.6f\n", n, S(n));
    }

    return 0;
}


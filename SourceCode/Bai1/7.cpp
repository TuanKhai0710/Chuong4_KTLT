#include <stdio.h>


int S(int n) {
    if (n == 1) {
        return 1;
    }
    return n * n + S(n - 1);
}

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Vui l�ng nhap so nguy�n duong.\n");
        return 1;
    }
    
    printf("S(%d) = %d\n", n, S(n));
    return 0;
}


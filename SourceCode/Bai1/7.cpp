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
        printf("Vui lòng nhap so nguyên duong.\n");
        return 1;
    }
    
    printf("S(%d) = %d\n", n, S(n));
    return 0;
}


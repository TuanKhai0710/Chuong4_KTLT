#include <stdio.h>

// Ham tinh UCLN cua hai so nguyen duong a va b
int ucln(int a, int b) {
    // Dieu kien dung: neu b = 0 thi UCLN(a, b) = a
    if (b == 0) {
        return a;
    }
    // De quy: su dung thuat toan Euclid
    return ucln(b, a % b);
}

int main() {
    int a, b;
    
    printf("Nhap hai so nguyen duong a va b: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong.\n");
        return 1;
    }
    
    printf("UCLN(%d, %d) = %d\n", a, b, ucln(a, b));
    
    return 0;
}


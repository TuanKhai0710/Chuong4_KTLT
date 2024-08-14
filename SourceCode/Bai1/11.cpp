#include <stdio.h>
#include <math.h>

double tinhGiaiThua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * tinhGiaiThua(n - 1);
}

// Hàm tính sqrt(a + b)
double tinhCanBacHaiCuaTong(int a, int b) {
    return sqrt(a + b);
}

// Hàm tính sqrt(k!)
double tinhCanBacHaiCuaGiaiThua(int k) {
    return sqrt(tinhGiaiThua(k));
}

// Hàm tính giá tri cua bieu thuc tai chi so i
double tinhGiaTriPhanTu(int i) {
    double tuSo = i + tinhCanBacHaiCuaTong(i, i + 1);
    double mauSo = (i + 1) + tinhCanBacHaiCuaGiaiThua(i + 2);
    return tuSo / mauSo;
}

double tinhTong(int n) {
    if (n == 1) {
        return tinhGiaTriPhanTu(1); // (1 + sqrt(1 + 2)) / (2 + sqrt(3!))
    }
    // Goi de quy tinh gia tri cua phan hien tai và cong voi ket quq cua tinhTong(n - 1)
    return tinhGiaTriPhanTu(n) + tinhTong(n - 1);
}

int main() {
    int n;
    
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Vui long nhap so nguyen duong lon hon hoac bang 1.\n");
        return 1;
    }
    
    printf("Ket qua phep tinh bang ham de quy la:\n");
    printf("S(%d) = %.6f\n", n, tinhTong(n));
    
    return 0;
}


#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool validatedata(int a, int b) {
    if (a == 0 || b == 0) {
        printf("Do dai 1 canh khong the bang 0\n");
        return false;
    } else {
        return true;
    }
}

float tinhcanhhuyen(int a, int b) {
    return (float) (sqrt(a * a + b * b));
}

int main() {
    int a, b;
    printf("Nhap vao 2 canh goc vuong cua tam giac: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    bool isvalidatedata = validatedata(a, b);
    if (isvalidatedata) {
        printf("Chieu dai canh huyen cua tam giac co 2 canh goc vuong la %d va %d la : %.2f", a, b,
               tinhcanhhuyen(a, b));
    }
    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z;

    printf("Formula 1 & 2\n");
    printf("Masukan nilai x = ");
    scanf("%lf", &x);

    // cari y pakai formula 1
    y = 3 * pow(x, 2) + 6 * x + 9;

    // hitung z pakai formula 2
    z = (2 * pow(y, 2) + 5 * pow(x, 2)) / (9 * y);

    // output
    printf("Didapatkan nilai y = %.2f dan nilai z = %.7f\n", y, z);

    return 0;
}
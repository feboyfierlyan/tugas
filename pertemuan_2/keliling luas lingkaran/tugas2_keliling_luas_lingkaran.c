#include <stdio.h>
#include <math.h>
#define M_PI 3.14159

int main() {
    float jarijari;

    printf("Masukan jari-jari lingkaran = ");
    scanf("%f", &jarijari);

    float keliling = 2 * M_PI * jarijari;
    float luas = M_PI * pow(jarijari, 2);

    // output
    printf("Keliling lingkaran dengan jari-jari %.2f adalah = %.2f\n", jarijari, keliling);
    printf("Luas lingkaran dengan jari-jari %.2f adalah = %.2f\n", jarijari, luas);

    return 0;
}
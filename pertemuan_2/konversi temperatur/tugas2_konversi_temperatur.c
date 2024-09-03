#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Masukkan derajat Fahrenheit = ");
    scanf("%f", &fahrenheit);

    celsius = 5.0 / 9.0 * (fahrenheit - 32);

    printf("%.2f derajat Fahrenheit dalam Celcius adalah = %.2f\n",fahrenheit, celsius);

    return 0;
}
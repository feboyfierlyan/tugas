#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, c, d, hasil;

    printf("\nMasukan nilai a b = ");
    scanf("%d %d", &a, &b);
    printf("\nMasukan nilai c d = ");
    scanf("%d %d", &c, &d);
    printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    hasil = a - b;
    printf("\nHasil dari a - b = %d\n", hasil);

    hasil = c + d;
    printf("\nHasil dari c + d = %d\n", hasil);

    hasil = b * c;
    printf("\nHasil dari b * c = %d\n", hasil);

    hasil = a / c;
    printf("\nHasil dari a / c = %d\n", hasil);

    hasil = a + b * c;
    printf("\nHasil dari a + b * c = %d\n", hasil);

    hasil = a * b + c * d;
    printf("\nHasil dari a * b + c * d = %d\n", hasil);

    getch();

    
}
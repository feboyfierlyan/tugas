#include <stdio.h>
#include <conio.h>

void main() {
    int x, y;

    printf("Masukkan nilai x = "); scanf("%d", &x);
    printf("Masukan nilai y = "); scanf("%d", &y);
    printf("\nNilai %d < %d adalah %d\n", x, y, x < y);
    printf("Nilai %d > %d adalah %d\n", x, y, x > y);
    printf("\nNilai %d == %d adalah %d\n", x, y, x == y);
    printf("\nNilai %d <= %d adalah %d\n", x, y, x <= y);
    printf ("Nilai %d >= %d adalah %d\n", x, y, x >= y);
    printf("\nNilai %d != %d adalah %d\n", x, y, x != y);

    getch();

}
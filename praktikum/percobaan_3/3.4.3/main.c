#include <stdio.h>
#include <conio.h>

void main() {
    int x, y, n, m;

    printf("Masukkan nilai x = "); scanf("%d", &x);
    printf("Masukan nilai y = "); scanf("%d", &y);

    n=(x<10) && (y>10);
    m=(x<10) || (y>10);
    printf("\nNilai dari %d < 10 && %d > 10 adalah = %d\n", x, y, n);
    printf("\nNilai dari %d < 10 || %d > 10 adalah = %d\n", x, y, m);

    getch();

}

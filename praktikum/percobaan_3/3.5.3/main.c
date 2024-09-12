#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c, d;
    int m, n, hasil;

    printf("Masukkan nilai a = "); scanf("%d", &a);
    printf("Masukkan nilai b = "); scanf("%d", &b);
    printf("Masukkan nilai c = "); scanf("%d", &c);
    printf("Masukkan nilai d = "); scanf("%d", &d);

    m = (a > b) ? a : b;
    n = (c < d) ? d : c;
    hasil = (m > n) ? m : n;

    if (a > b) {
        printf("Nilai a lebih besar daripada b\n");
    } else if (a < b) {
        printf("Nilai a lebih kecil daripada b\n");
    } else {
        printf("Nilai a sama dengan b\n");
    }

    if (c < d) {
        printf("Nilai c lebih kecil daripada d\n");
    } else if (c > d) {
        printf("Nilai c lebih besar daripada d\n");
    } else {
        printf("Nilai c sama dengan d\n");
    }

    printf("jadi nilai maksimum adalah %d\n", hasil);

    getch();

    return 0;
}
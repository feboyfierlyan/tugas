#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, c, d;

    printf("Masukan nilai a = "); scanf("%d", &a);
    printf("Masukan nilai b = "); scanf("%d", &b);
    printf("Masukan nilai c = "); scanf("%d", &c);
    printf("Masukan nilai d = "); scanf("%d", &d);

    printf("\nNilai a dibanding b adalah a lebih kecil");
    printf(" %s dari pada b", (a>b) ?"BESAR":"kecil");
    printf("\nNilai c dibanding d adalah c lebih kecil");
    printf(" %s dari pada d", (c<d) ?"kecil":"BESAR");

    getch();
}
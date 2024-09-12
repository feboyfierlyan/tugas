#include <stdio.h>
#include <conio.h>

void main() {
    int a, b, x, y;

    printf("Masukan nilai dari a = "); scanf("%d", &a);
    printf("Masukan nilai dari b = "); scanf("%d", &b);
    printf("Masukan nilai dari x = "); scanf("%d", &x);
    printf("Masukan nilai dari y = "); scanf("%d", &y);
    printf("\nNilai y dari y*= x adalah = %d\n", y*=x);
    printf("\nNilai y dari y/= x adalah = %d\n", y/=x);
    printf("\nNilai y dari y+= x adalah = %d\n", y+=x);
    printf("\nNilai y dari y-= x adalah = %d\n", y-=x);
    printf("\nNilai y dari y%= x adalah = %d\n", y%=x);
    puts("");
    printf("\nNilai y dari y*=(a+b) adalah = %d\n", y*=(a+b));
    printf("\nNilai y dari y/=(a-b) adalah = %d\n", y/=(a-b));
    printf("\nNilai y dari y+=(a%%b) adalah = %d\n", y+=(a%b));
    printf("\nNilai y dari y-=(a/b) adalah = %d\n", y-=(a/b));

    getch();

}
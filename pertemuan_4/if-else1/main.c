#include <stdio.h>
#include <conio.h>

void main() {
    int bil, absolut;

    printf("Masukkan bilangan bulat : ");
    scanf("%d", &bil);

    if (bil < 0) absolut = -bil;
    
    printf("Nilai absolut dari %d adalah %d\n", bil, absolut);

    getch();

}
#include <stdio.h>

int main() {
    int jam, menit;
    printf("program konversi jam ke menit\n");
    printf("masukan jam dan menit (jj:mm) = ");
    scanf("%d:%d", &jam, &menit);
    printf("jam %d:%d adalah setara dengan %d menit\n", jam, menit, jam * 60 + menit);
    return 0;
}
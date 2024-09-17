#include <stdio.h>

int main() {
    int a, b, c, d;
    
    printf("Masukan nilai a, b, c, and d : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int resultA = (a > b) && (c < d) || (a == b);
    int resultB = (a == b) || (c == d) && (a < b);
    int resultC = (a <= c) && (b >= d) || (a == d);
    int resultD = (a >= d) || (b <= c) && (c == d);
    int resultE = (a != b) || (c > d) || (a != d);
    
    printf("Hasil A: %d\n", resultA);
    printf("Hasil B: %d\n", resultB);
    printf("Hasil C: %d\n", resultC);
    printf("Hasil D: %d\n", resultD);
    printf("Hasil E: %d\n", resultE);
    
    return 0;
}
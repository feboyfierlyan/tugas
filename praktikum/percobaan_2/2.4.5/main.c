#include <stdio.h>

void main() {
    float p1, p2 = 123.45678, f2;
    int b1, b2 = -150;

    b1 = p1;
    printf("%f disimpan ke int menghasilkan %d\n\n", p1, b1);

    p1 = b2;
    printf("%d disimpan ke float menghasilkan %f\n\n", b2, p1);

    p1 = b2 / 100;
    printf("%d dibagi 100 disimpan menghasilkan %f\n\n", b2, p1);

    p2 = b2 / 100.0;
    printf("%d dibagi 100 disimpan menghasilkan %f\n\n", b2, p2);

}
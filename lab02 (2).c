#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b, c, d, e, g;
    int b1, b2, b3, b4;
    int b5, b6, b7, b8;
    int k;

    k = a % 10;
    printf("%d\n", k);


    c = a - ((a / 10) * 10); //ок
    d = (a / 10);
    printf("%d", c);

    printf("\n");

    e = d - ((d / 10) * 10);
    g = (d / 10);
    printf("%d\n", e);

    b1 = g - ((g / 10) * 10);
    b2 = (g / 10);
    printf("%d\n", b1);

    b3 = b2 - ((b2 / 10) * 10);
    b4 = (b2 / 10);
    printf("%d\n", b3);

    b5 = b4 - ((b4 / 10) * 10);
    b6 = (b4 / 10);
    printf("%d\n", b5);

    b7 = b6 - ((b6 / 10) * 10);
    b8 = (b6 / 10);
    printf("%d", b8);




}
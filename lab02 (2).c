#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b, c, d, e, g;
    int b1, b2, b3, b4;

    c = a - ((a / 5) * 5); //ок
    d = (a / 5);

    printf("%d", c);
    printf("\n");
    // наш перший біт

    e = d - ((d / 5) * 5); //ок
    g = (d / 5);  //ок?

    printf("%d\n", e);
    //друге число

    b1 = g - ((g / 5) * 5);
    b2 = (g / 5);
    printf("%d", b1);

    b3 = b2 - ((b2 / 5) * 5);
    b4 = (b2 / 5);
    printf("%d", b3);

}
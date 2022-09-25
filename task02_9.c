#include <stdio.h>

int main()
{
    int b;
    scanf("%d", &b);

    int c, d, e, f, g;
    int z, l, p, k, r;
    int j, o;



    z = b % 5;
    c = b / 5;
    printf("%d\n", z);
    if (z > 5) { return 0; }

    d = c % 5;
    c = c / 5;
    printf("%d\n", d);
    if (d > 5) { return 0; }

    e = c % 5;
    c = c / 5;
    printf("%d\n", e);
    if (e > 5) { return 0; }

    f = c % 5;
    c = c / 5;
    printf("%d\n", f);
    if (f > 5) { return 0; }

    g = c % 5;
    c = c / 5;
    printf("%d\n", g);
    if (g > 5) { return 0; }

    l = c % 5;
    c = c / 5;
    printf("%d\n", l);
    if (l > 5) { return 0; }

    p = c % 5;
    c = c / 5;
    printf("%d\n", p);
    if (p > 5) { return 0; }

    k = c % 5;
    c = c / 5;
    printf("%d\n", k);
    if (k > 5) { return 0; }

    if (c < 5) {
        o = c;
        printf("%d\n", o);
        goto label;
    }

    j = c % 5;
    c = c / 5;
    if (c = 0) {}
    else
        printf("%d\n", j);

    if (j > 5) { return 0; }


label:
    printf("Number %d can be in 5-numeral system)", b);
}

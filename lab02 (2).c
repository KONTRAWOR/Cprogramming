#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b, c, d, e, g;
    int b1, b2, b3, b4;

    c = a - ((a / 5) * 5); //��
    d = (a / 5);

    printf("%d", c);
    printf("\n");
    // ��� ������ ��

    e = d - ((d / 5) * 5); //��
    g = (d / 5);  //��?

    printf("%d\n", e);
    //����� �����

    b1 = g - ((g / 5) * 5);
    b2 = (g / 5);
    printf("%d", b1);

    b3 = b2 - ((b2 / 5) * 5);
    b4 = (b2 / 5);
    printf("%d", b3);

}
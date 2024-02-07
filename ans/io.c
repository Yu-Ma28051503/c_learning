/*
 * C言語入門4
 * io.c
 * 標準入出力を学習するプログラム
*/

#include <stdio.h>

int main(void)
{
    int i;
    double d;
    char c;
    char str[20];

    printf("i: ");
    scanf("%d", &i);
    printf("d: ");
    scanf("%lf", &d);
    printf("c: ");
    scanf(" %c", &c);
    printf("str: ");
    scanf("%s", str);

    printf("i = %d\n", i);
    printf("d = %f\n", d);
    printf("c = %c\n", c);
    printf("str = %s\n", str);

    return 0;
}

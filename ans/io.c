/*
 * C言語入門2
 * io.c
 * 標準入力から文字列を受け取り、Hello, 文字列! を出力するプログラム
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

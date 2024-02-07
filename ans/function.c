/*
 * C言語入門8
 * function.c
 * 関数を学習するプログラム
*/

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b);

int main(void)
{
    int a = 10;
    int b = 20;
    int sum;

    sum = add(a, b);
    printf("sum = %d\n", sum);

    sum = sub(a, b);
    printf("sub = %d\n", sum);

    return 0;
}

int sub(int a, int b)
{
    return a - b;
}

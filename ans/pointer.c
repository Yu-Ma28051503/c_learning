/*
 * C言語入門7
 * pointer.c
 * ポインタを学習するプログラム
*/

#include <stdio.h>

int add(int a, int b, int *sum);
void cal(int a, int b, int *sum, int *diff, int *prod, int *quot);

int main(void)
{
    int a = 10;
    int *p;
    int sum = 0;
    int sum2, diff, prod, quot;

    p = &a;

    printf("a = %d\n", a);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    printf("sum = %d\n", sum);
    add(10, 20, &sum);
    printf("sum = %d\n", sum);

    cal(100, 20, &sum2, &diff, &prod, &quot);
    printf("sum2 = %d\n", sum2);
    printf("diff = %d\n", diff);
    printf("prod = %d\n", prod);
    printf("quot = %d\n", quot);

    return 0;
}

// 関数の引数にポインタ
int add(int a, int b, int *sum)
{
    *sum = a + b;

    return 0;
}

void cal(int a, int b, int *sum, int *diff, int *prod, int *quot)
{
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
    *quot = a / b;

    return;
}

/*
 * C言語入門2
 * variable.c
 * C言語の変数と型を学習するプログラム
*/

#include <stdio.h>

int global = 10;  // グローバル変数

int main(void)
{
    // 変数宣言をしてみよう
    short s = 10;  // 整数型(2byte)
    int i = 10;  // 整数型(4byte)
    long l = 10;  // 整数型(4byte)
    long long ll = 10;  // 整数型(8byte)
    float f = 10.0;  // 浮動小数点型(4byte)
    double d = 10.0;  // 浮動小数点型(8byte)
    long double ld = 10.0;  // 浮動小数点型(16byte)
    char c = 'a';  // 文字型(1byte)
    char str[] = "Hello, World!";  // 文字型配列
    unsigned int ui = 10;  // 符号なし整数型(4byte)
    unsigned long ul = 10;  // 符号なし整数型(4byte)
    unsigned long long ull = 10;  // 符号なし整数型(8byte)

    // 変数の値を確認してみよう
    printf("s = %d\n", s);
    printf("i = %d\n", i);
    printf("l = %ld\n", l);
    printf("ll = %lld\n", ll);
    printf("f = %f\n", f);
    printf("d = %f\n", d);
    printf("ld = %Lf\n", ld);
    printf("c = %c\n", c);
    printf("str = %s\n", str);
    printf("ui = %u\n", ui);
    printf("ul = %lu\n", ul);
    printf("ull = %llu\n", ull);

    // 変数のサイズを確認してみよう
    // sizeof -> long unsighned int
    printf("short: %ld\n", sizeof(s));
    printf("int: %ld\n", sizeof(i));
    printf("long: %ld\n", sizeof(l));
    printf("long long: %ld\n", sizeof(ll));
    printf("float: %ld\n", sizeof(f));
    printf("double: %ld\n", sizeof(d));
    printf("long double: %ld\n", sizeof(ld));
    printf("char: %ld\n", sizeof(c));
    printf("char[]: %ld\n", sizeof(str));
    printf("unsigned int: %ld\n", sizeof(ui));
    printf("unsigned long: %ld\n", sizeof(ul));
    printf("unsigned long long: %ld\n", sizeof(ull));

    // 定数
    const int ci = 10;  // 定数
    printf("ci = %d\n", ci);
    //ci = 20;  // エラー
    
    return 0;
}
/*
 * C言語入門3
 * calculation.c
 * 演算を学習するプログラム
*/

#include <stdio.h>

int main(void)
{
    int a = 101, b = 23, c = 0;

    // 四則演算
    printf("a + b = %d\n", a + b);  // 足し算
    printf("a - b = %d\n", a - b);  // 引き算
    printf("a * b = %d\n", a * b);  // 掛け算
    printf("a / b = %d\n", a / b);  // 割り算
    printf("a %% b = %d\n", a % b);  // 剰余

    // 型変換
    printf("(int)a / (int)b = %d\n", (int)a / (int)b);  // キャスト(型変換)
    printf("(double)a / (int)b = %f\n", (double)a / (int)b);  // キャスト(型変換)
    printf("(int)a / (double)b = %f\n", (int)a / (double)b);  // キャスト(型変換)
    printf("(double)a / (double)b = %f\n", (double)a / (double)b);  // キャスト(型変換)

    // 代入演算
    printf("a += b: %d\n", a += b);  // a = a + b
    a = 101; b = 23;
    printf("a -= b: %d\n", a -= b);  // a = a - b
    a = 101; b = 23;
    printf("a *= b: %d\n", a *= b);  // a = a * b
    a = 101; b = 23;
    printf("a /= b: %d\n", a /= b);  // a = a / b
    a = 101; b = 23;
    printf("a %%= b: %d\n", a %= b);  // a = a % b

    // 値を初期値の戻す
    a = 101; b = 23;

    // インクリメント・デクリメント
    printf("a++: %d\n", a++);  // a = a + 1
    printf("a--: %d\n", a--);  // a = a - 1
    printf("++a: %d\n", ++a);  // a = a + 1
    printf("--a: %d\n", --a);  // a = a - 1
    printf("a: %d\n", a);

    printf("c = a + b: %d\n", c = a + b);  // a + b を c に代入
    printf("c: %d\n", c);

    // 比較演算
    printf("a == b: %d\n", a == b);  // a と b が等しい
    printf("a != b: %d\n", a != b);  // a と b が等しくない
    printf("a > b: %d\n", a > b);  // a が b より大きい
    printf("a < b: %d\n", a < b);  // a が b より小さい
    printf("a >= b: %d\n", a >= b);  // a が b 以上
    printf("a <= b: %d\n", a <= b);  // a が b 以下
    
    // 論理演算
    printf("a&b: %d\n", a&b);  // a と b の論理積
    printf("a|b: %d\n", a|b);  // a と b の論理和
    printf("a^b: %d\n", a^b);  // a と b の排他的論理和
    printf("~a: %d\n", ~a);  // a のビット反転
    printf("a<<2: %d\n", a<<2);  // a を左に2ビットシフト
    printf("a>>2: %d\n", a>>2);  // a を右に2ビットシフト

    return 0;
}
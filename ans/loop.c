/*
 * C言語入門4
 * loop.c
 * for文とwhile文の使い方
*/

#include <stdio.h>

int main(void)
{
    int i;

    // for文
    // 0 - 9 までの数字を表示
    printf("for文でのループ\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    // while文
    // 0 - 9 までの数字を表示
    printf("while文でのループ\n");
    i = 0;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // do-while文
    // 10を表示
    printf("do-while文でのループ\n");
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);
    printf("\n");

    // break文
    // 0 - 4 までの数字を表示
    printf("break文の使い方\n");
    i = 0;
    for (;;) {
        if (i == 5) {
            break;
        }
        printf("%d ", i);
        i++;
    }
    printf("\n");

    // continue文
    // 0 - 9 までの数字を表示(5を除く)
    printf("continue文の使い方\n");
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // 多重ループ
    // 0 - 99 までの数字を表示
    printf("多重ループ\n");
    for (i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 5) {
                continue;
            }

            if (i == 5) {
                break;
            }
            printf("%d ", i * 10 + j);
        }

        if(i == 2) continue;
        if(i == 9) break;
    }
    printf("\n");

    return 0;
}

/*
 * C言語入門4
 * loop.c
 * for文とwhile文の使い方
*/

#include <stdio.h>

int main(void)
{
    int i;

    printf("for文でのループ\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("while文でのループ\n");
    i = 0;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    printf("do-while文でのループ\n");
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);
    printf("\n");

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

    printf("continue文の使い方\n");
    for (i = 0; i < 10; i++) {
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    printf("多重ループ\n");
    for (i = 0; i < 10; i++) {
        int j;
        for (j = 0; j < 10; j++) {
            if (j == 5) {
                continue;
            }

            if (i == 5) {
                break;
            }
            printf("%d ", i * 10 + j);
        }

        if(i = 2) continue;
        if(i == 9) break;
    }

    return 0;
}
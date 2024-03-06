/*
 * C言語入門9
 * file.c
 * ファイル入出力を学習するプログラム
*/

#include <stdio.h>

int main(void)
{
    FILE *fp1, *fp2, *fp3;
    char str[1024];

    fp1 = fopen("file1.txt", "r");
    if (fp1 == NULL) {
        printf("file1.txtが開けません\n");
        return 1;
    }

    fp2 = fopen("file2.txt", "w");
    if (fp2 == NULL) {
        printf("file2.txtが開けません\n");
        return 1;
    }

    fp3 = fopen("file3.txt", "a");
    if (fp3 == NULL) {
        printf("file3.txtが開けません\n");
        return 1;
    }

    // file1の中身を読み込み
    fscanf(fp1, "%s", str);
    printf("file1.txt: %s\n", str);

    // file2に書き込み
    fprintf(fp2, "I am crazy, I suppose, Jerusalem in the grip of madness.\n");

    // file3に追記
    fprintf(fp3, "Before she turned five, ten maidservants had fallen into a century of slumber.\n");

    // ファイルポインタを閉じる
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}

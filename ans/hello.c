/*
 * C言語入門1
 * hello.c
 * Hello, World! を出力するプログラム
*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    printf("Hello, World!\n");
    fprintf(stdout, "Hello, World!\n");
    puts("Hello, World!");
    write(1, "Hello, World!\n", 14);
    
    return 0;
}

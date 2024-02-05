/*
 * C言語入門3
 * conditional_branch.c
 * if文とswitch文の使い方
*/

#include <stdio.h>

int main(void)
{
    int number;

    printf("整数を入力してください: ");
    scanf("%d", &number);

    if (number < 10) {
        printf("%dは10より小さい\n", number);
    } else if (number > 100) {
        printf("%dは100より大きい\n", number);
    } else if(number >= 10 && number <= 50) {
        printf("%dは10以上50以下\n", number);
    } else if (number > 90 || number < 60) {
        printf("%dは90より大きいか60より小さい\n", number);
    } else {
        printf("number: %d\n", number);
    }

    number = number % 10;

    switch (number) {
    case 1:
        printf("one\n");
        break;
    case 2:
        printf("two\n");
        break;
    case 3:
        printf("three\n");
        break;
    case 4:
        printf("four\n");
    case 5:
        printf("five\n");
    case 6:
        printf("six\n");
        break;
    case 7:
        printf("seven\n");
    case 8:
        printf("eight\n");
        break;
    case 9:
        printf("nine\n");
        break;
    default:
        printf("zero\n");
        break;
    }

    // おまけ
    // char dict[][6] = {
    //     "zero",
    //     "one",
    //     "two",
    //     "three",
    //     "four",
    //     "five",
    //     "six",
    //     "seven",
    //     "eight",
    //     "nine"
    // };

    // printf("%s\n", dict[number]);

    return 0;
}

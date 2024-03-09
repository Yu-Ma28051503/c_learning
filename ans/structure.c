/*
 * C言語入門8
 * structure.c
 * 構造体を学習するプログラム
*/

#include <stdio.h>
#include <string.h>

struct STUDENT {
    unsigned int id;
    char name[20];
    int age;
};

typedef struct {
    int id;
    char name[20];
    int age;
} TEACHER;

int main(void)
{
    struct STUDENT student1, student2;
    TEACHER teacher1, teacher2;

    student1.id = 100;
    strcpy(student1.name, "ikepe");
    student1.age = 21;

    student2.id = 101;
    strcpy(student2.name, "hiro");
    student2.age = 19;

    teacher1.id = 10000;
    strcpy(teacher1.name, "yamada");
    teacher1.age = 30;

    teacher2.id = 10001;
    strcpy(teacher2.name, "suzuki");
    teacher2.age = 35;

    printf("student1: id = %d, name = %s, age = %d\n", student1.id, student1.name, student1.age);
    printf("student2: id = %d, name = %s, age = %d\n", student2.id, student2.name, student2.age);
    printf("teacher1: id = %d, name = %s, age = %d\n", teacher1.id, teacher1.name, teacher1.age);
    printf("teacher2: id = %d, name = %s, age = %d\n", teacher2.id, teacher2.name, teacher2.age);

    return 0;
}

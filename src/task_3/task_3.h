#ifndef TASK_3_H
#define TASK_3_H

#include <stdio.h>

typedef struct Person {
    char name[20];
    char surname[20];
    int height;
} Person;

int serch_height(Person *people, int N, int H);

#endif
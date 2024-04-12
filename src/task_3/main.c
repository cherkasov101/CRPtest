#include "task_3.h"

int main() {
    int N;
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("n/a");
        return 0;
    }

    Person people[N];

    for (int i = 0; i < N; i++) {
        if (scanf("%20s %20s %d", people[i].name, people[i].surname, &people[i].height) != 3) {
            printf("n/a");
            return 0;
        }
    }

    int H;
    if (scanf("%d", &H) != 1 || H <= 0) {
        printf("n/a");
        return 0;
    }

    if (serch_height(people, N, H)) {
        printf("\n");
    } else {
        printf("Nothing");
    }

    return 0;
}


int serch_height(Person *people, int N, int H) {
    int found = 0;
    for (int i = 0; i < N; i++) {
        if (people[i].height >= H) {
            if (found) {
                printf(", ");
            }
            printf("%s %s", people[i].name, people[i].surname);
            found = 1;
        }
    }
    return found;
}
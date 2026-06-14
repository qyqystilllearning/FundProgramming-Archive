#include <stdio.h>
#include <string.h>

struct Person {
    char name[100];
    int strength;
    struct Person* connection;
};

int main() {
    int n, m;
    scanf("%d", &n);
    struct Person people[n];

    for (int i = 0; i < n; ++i) {
        char name[100];
        int strength;
        scanf("%s %d", name, &strength);
        strcpy(people[i].name, name);
        people[i].strength = strength;
        people[i].connection = NULL;
    }

    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int index1, index2;
        scanf("%d %d", &index1, &index2);
        people[index1 - 1].connection = &people[index2 - 1];
    }

    int indexTarget;
    scanf("%d", &indexTarget);
    int totalStrength = 0;

    struct Person* target = &people[indexTarget - 1];
    while (target != NULL) {
        totalStrength += target->strength;
        target = target->connection;
    }

    printf("%d\n", totalStrength);

    return 0;
}

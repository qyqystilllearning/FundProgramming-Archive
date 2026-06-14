#include <stdio.h>
#include <string.h>

#define MAX_PEOPLE 100
#define MAX_NAME_LENGTH 16

struct Person {
    char name[MAX_NAME_LENGTH];
    int strength;
};

int main() {
    int n, pwr;
    struct Person people[MAX_PEOPLE];

    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        scanf("%s %d", people[i].name, &people[i].strength);
    }

    scanf("%d", &pwr);

        for (int i = 0; i < n; ++i) {
            if (people[i].strength > pwr) {
                printf("%s\n", people[i].name);
            }
    }

    return 0;
}

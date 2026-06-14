#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Athlete {
    char name[16];
    double runningTime, SwimmingTime, CyclingTime;
    double totalTime;
};

void insertionSort(struct Athlete athletes[], int n){
    int i, j;
    struct Athlete key;

    for (i = 1; i < n; i++) {
        key = athletes[i];
        j = i - 1;

        while (j >= 0 && athletes[j].totalTime > key.totalTime) {
            athletes[j + 1] = athletes[j];
            j = j - 1;
        }
        athletes[j + 1] = key;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct Athlete athletes[n];

    for (int i = 0; i < n; i++) {
        scanf("%s", athletes[i].name);

        int minutes, seconds;
        double miliseconds;
        for (int j = 0; j < 3; j++) {
            scanf("%d:%d.%lf ", &minutes, &seconds, &miliseconds);

            if (j == 0) {
                athletes[i].SwimmingTime = miliseconds / 1000 + seconds + minutes * 60;
            } else if (j == 1) {
                athletes[i].CyclingTime = miliseconds / 1000 + seconds + minutes * 60;
            } else if (j == 2) {
                athletes[i].runningTime = miliseconds / 1000 + seconds + minutes * 60;
            }
        }
        athletes[i].totalTime = athletes[i].SwimmingTime + athletes[i].CyclingTime + athletes[i].runningTime;
    }

    // Sort athletes based on total time
    insertionSort(athletes, n);

    printf("Top 3 Triathlon\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, athletes[i].name);
    }
    printf("\n");

    // Sort athletes based on swimming time
    insertionSort(athletes, n);
    printf("Top 3 Swimming\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, athletes[i].name);
    }
    printf("\n");

    // Sort athletes based on cycling time
    insertionSort(athletes, n);
    printf("Top 3 Cycling\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, athletes[i].name);
    }
    printf("\n");

    // Sort athletes based on running time
    insertionSort(athletes, n);
    printf("Top 3 Running\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, athletes[i].name);
    }
    printf("\n");

    return 0;
}

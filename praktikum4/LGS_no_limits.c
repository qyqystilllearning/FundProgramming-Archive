#include <stdio.h>
#include <string.h>

struct Cyclist {
    char name[100];
    int finishTime;
    int skillNumber;
};

int main() {
    int T;
    scanf("%d", &T);

    struct Cyclist cyclists[T];

    for (int i = 0; i < T; i++) {
        scanf("%s %d %d", cyclists[i].name, &cyclists[i].finishTime, &cyclists[i].skillNumber);
    }

    struct Cyclist winner = cyclists[0];
    int isTie = 0;

    for (int i = 1; i < T; i++) {
        if (cyclists[i].finishTime < winner.finishTime) {
            winner = cyclists[i];
            isTie = 0; 
        } else if (cyclists[i].finishTime == winner.finishTime) {
            if (cyclists[i].skillNumber > winner.skillNumber) {
                winner = cyclists[i];
                isTie = 0; 
            } else if (cyclists[i].skillNumber == winner.skillNumber) {
                isTie = 1; 
            }
        }
    }
    
    if (isTie) {
        printf("It's a tie! Rematch!\n");
    } else {
        printf("%s wins!\n", winner.name);
    }

    return 0;
}

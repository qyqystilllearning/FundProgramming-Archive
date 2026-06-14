#include <stdio.h>
#include <limits.h>

struct Cyclist {
    char name[100]; 
    int finish_time;
    int skill;
};

struct Cyclist determine_winner(struct Cyclist *cyclists, int num_cyclists) {
    int fastest_time = INT_MAX;
    struct Cyclist winner;

    if (num_cyclists > 0) {
        for (int i = 0; i < num_cyclists; i++) {
            if (cyclists[i].finish_time < fastest_time) {
                fastest_time = cyclists[i].finish_time;
                winner = cyclists[i];
            } else if (cyclists[i].finish_time == fastest_time && cyclists[i].skill > winner.skill) {
                winner = cyclists[i];
            }
        }
    }

    return winner;
}

int main() {
    int T;
    scanf("%d", &T);

    struct Cyclist cyclists[T];
    for (int i = 0; i < T; i++) {
        scanf("%s %d %d", cyclists[i].name, &cyclists[i].finish_time, &cyclists[i].skill);
    }

    struct Cyclist result = determine_winner(cyclists, T);

    int count = 0;
    for (int i = 0; i < T; i++) {
        if (cyclists[i].finish_time == result.finish_time && cyclists[i].skill == result.skill) {
            count++;
        }
    }

    if (count > 1) {
        printf("It's a tie! Rematch!\n");
    } else {
        printf("%s wins!\n", result.name);
    }

    return 0;
}
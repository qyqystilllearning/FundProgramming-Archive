#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Athlete {
    char name[16];
    double runningTime, SwimmingTime, CyclingTime;
    double totalTime;
};

int convert_time_to_seconds(int minutes, int seconds, double milliseconds) {
    return milliseconds / 1000 + seconds + minutes * 60;
}

void calculate_total_time(struct Athlete *athlete) {
    athlete->totalTime = athlete->SwimmingTime + athlete->CyclingTime + athlete->runningTime;
}

int compare(const void *a, const void *b) {
    struct Athlete *athleteA = (struct Athlete *)a;
    struct Athlete *athleteB = (struct Athlete *)b;
    return (int)(athleteA->totalTime - athleteB->totalTime);
}

void print_top_3_branch(struct Athlete *sorted_data, char *branch) {
    printf("Top 3 %s\n", branch);
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, sorted_data[i].name);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    struct Athlete data[n];

    for (int i = 0; i < n; i++) {
        int swimMinutes, swimSeconds;
        double swimMilliseconds;
        int cycleMinutes, cycleSeconds;
        double cycleMilliseconds;
        int runMinutes, runSeconds;
        double runMilliseconds;

        scanf("%s %lf:%d:%lf %lf:%d:%lf %lf:%d:%lf",
              data[i].name,
              &data[i].SwimmingTime, &swimMinutes, &swimSeconds, &swimMilliseconds,
              &data[i].CyclingTime, &cycleMinutes, &cycleSeconds, &cycleMilliseconds,
              &data[i].runningTime, &runMinutes, &runSeconds, &runMilliseconds);
        
        data[i].SwimmingTime = convert_time_to_seconds(swimMinutes, swimSeconds, swimMilliseconds);
        data[i].CyclingTime = convert_time_to_seconds(cycleMinutes, cycleSeconds, cycleMilliseconds);
        data[i].runningTime = convert_time_to_seconds(runMinutes, runSeconds, runMilliseconds);

        calculate_total_time(&data[i]);
    }

    qsort(data, n, sizeof(struct Athlete), compare);

    printf("Top 3 Triathlon\n");
    for (int i = 0; i < 3; i++) {
        printf("%d. %s\n", i + 1, data[i].name);
    }

    qsort(data, n, sizeof(struct Athlete), compare);

    struct Athlete sorted_swim[n], sorted_cycle[n], sorted_run[n];
    memcpy(sorted_swim, data, sizeof(struct Athlete) * n);
    memcpy(sorted_cycle, data, sizeof(struct Athlete) * n);
    memcpy(sorted_run, data, sizeof(struct Athlete) * n);

    qsort(sorted_swim, n, sizeof(struct Athlete), compare);
    qsort(sorted_cycle, n, sizeof(struct Athlete), compare);
    qsort(sorted_run, n, sizeof(struct Athlete), compare);

    print_top_3_branch(sorted_swim, "Swimming");
    print_top_3_branch(sorted_cycle, "Cycling");
    print_top_3_branch(sorted_run, "Running");

    return 0;
}

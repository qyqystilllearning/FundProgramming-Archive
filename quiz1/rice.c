#include <stdio.h>

int printRiceField(int x) {
    printf("+");
    for (int i = 0; i < x * 3; i++) {
        printf("-");
    }
    printf("+\n");
    
    for (int i = 0; i < x; i++) {
        printf("|");
        for (int j = 0; j < x; j++) {
            if ((i + j) % 2 == 0) {
                printf(" v ");
            } else {
                printf(" . ");
            }
        }
        printf("|\n");
    }

    printf("+");
    for (int i = 0; i < x * 3; i++) {
        printf("-");
    }
    printf("+\n");
}

int main() {
    int n;
    scanf("%d", &n);
    int x[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < n; i++) {
        printRiceField(x[i]);

        if (i < n - 1) {
            printf("\n");
        }
    }

    return 0;
}
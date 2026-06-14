#include <stdio.h>
#include <stdlib.h>

void fa(int n, int *astro) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (astro[j] > astro[j + 1]) {
                int temp = astro[j];
                astro[j] = astro[j + 1];
                astro[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int *astro_ids = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &astro_ids[i]);
    }

    fa(n, astro_ids);

    int med = n / 2;
    if (n % 2 == 0) {
        printf("IDK but %d & %d kinda SUS!\n", astro_ids[med - 1], astro_ids[med]);
    } else {
        printf("%d is the Alien!\n", astro_ids[med]);
    }

    free(astro_ids);
    return 0;
}

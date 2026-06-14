#include <stdio.h>
#include <string.h>
#include <stdlib.h>//bismillah ac 7

void nswpp(char brand[][12], int n, char pmet1[], char pmet2[]) {
    int mark1 = -1;
    int mark2 = -1;
    for (int j = 0; j < n; j++) {
        if (strcmp(brand[j], pmet1) == 0) {
            mark1 = j;
        }
        if (strcmp(brand[j], pmet2) == 0) {
            mark2 = j;
        }
    }
    if (mark1 != -1 && mark2 != -1) {
        char temp_3[12];
        strcpy(temp_3, brand[mark1]);
        strcpy(brand[mark1], brand[mark2]);
        strcpy(brand[mark2], temp_3);
    }
}

int main() {
    int num;
    scanf("%d", &num);
    char brand[num][12];
    for (int i = 0; i < num; i++) {
        scanf("%s", brand[i]);
    }

    int change;
    scanf("%d", &change);
    for (int i = 0; i < change; i++) {
        char pmet1[12];
        char pmet2[12];

        scanf("%s %s", pmet1, pmet2);
        nswpp(brand, num, pmet1, pmet2);
    }

    for (int i = 0; i < num; i++) {
        printf("%s\n", brand[i]);
    }

    return 0;
}

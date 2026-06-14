#include <stdio.h>
#include <string.h>

struct Cake {
    int ID;
    char f[101];
};

void sortCakes(struct Cake cakes[], int T) {
    struct Cake b[T];
    struct Cake c[T];
    struct Cake t[T];
    int bcnt = 0, ccnt = 0, tcnt = 0;

    for (int i = 0; i < T; i++) {
        if (cakes[i].ID == 1) {
            b[bcnt++] = cakes[i];
        } else if (cakes[i].ID == 2) {
            c[ccnt++] = cakes[i];
        } else if (cakes[i].ID == 3) {
            t[tcnt++] = cakes[i];
        }
    }

    for (int i = 0; i < bcnt - 1; i++) {
        for (int j = 0; j < bcnt - i - 1; j++) {
            if (strcmp(b[j].f, b[j + 1].f) > 0) {
                struct Cake temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
                 }
        }
    }

    for (int i = 0; i < ccnt - 1; i++) {
        for (int j = 0; j < ccnt - i - 1; j++) {
            if (strcmp(c[j].f, c[j + 1].f) > 0) {
                struct Cake temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < tcnt - 1; i++) {
        for (int j = 0; j < tcnt - i - 1; j++) {
            if (strcmp(t[j].f, t[j + 1].f) > 0) {
                struct Cake temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < bcnt; i++) {
        printf("Cake base: %s\n", b[i].f);
    }
    for (int i = 0; i < ccnt; i++) {
        printf("Cream: %s\n", c[i].f);
    }
    for (int i = 0; i < tcnt; i++) {
        printf("Topping: %s\n", t[i].f);
    }
}

int main(){
    int T;
    scanf("%d", &T);
    struct Cake cakes[T];

    for(int i = 0; i < T;i++){
        scanf("%d %s", &cakes[i].ID, &cakes[i].f);
    }

    sortCakes(cakes, T);
}

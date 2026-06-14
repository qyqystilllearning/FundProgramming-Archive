#include <stdio.h>

int fib(int y) {
    if (y == 0) {
        return 2;
    } else if (y == 1) {
        return 3;
    } else {
        return fib(y - 1) + fib(y - 2);
    }
}

void sound_wave(int x) {
    if (x >= 1) {
        sound_wave(x - 1);
        for (int i = 1; i <= fib(x); i++) {
            printf(">");
        }
        printf("\n");
        sound_wave(x - 1);
    } else {
        printf(">>\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    sound_wave(num);

    return 0;
}

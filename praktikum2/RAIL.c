#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int minCapacity = 0;
    int currentCapacity = 0;

    for (int i = 0; i < n; i++) {
        int off, on;
        scanf("%d %d", &on, &off);

        currentCapacity += (on - off);

        if (currentCapacity > minCapacity) {
            minCapacity = currentCapacity;
        }
    }

    printf("%d\n", minCapacity);

    return 0;
}

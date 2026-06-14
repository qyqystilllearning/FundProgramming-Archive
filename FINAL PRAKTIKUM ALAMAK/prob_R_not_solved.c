#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int WZZ(int a, int b) {
        return (a & b) == 0;
    }

    int BZZ(int a, int b) {
        return ((a | b) == a) || ((b | a) == b);
    }

    if (a % b == 0 || b % a == 0) {
        if (BZZ(a, b)) {
            printf("RizzBuzz");
        } else if (WZZ(a, b)) {
            printf("RizzWuzz");
        } else {
            printf("Not Rizz");
        }
    } else {
        if (BZZ(a, b)) {
            printf("Not Rizz, but Buzz!");
        } else if (WZZ(a, b)) {
            printf("Not Rizz, but Wuzz!");
        } else {
            printf("Not Rizz");
        }
    }

    return 0;
}

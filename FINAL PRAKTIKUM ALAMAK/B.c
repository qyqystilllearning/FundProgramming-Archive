#include <stdio.h>

int b_cnt(int N, int A[]) {
    int bcnt = 0;
    int i = 0;

    while (i < N) {
        while (i < N - 1 && A[i] > A[i + 1]) {
            i++;
        }
        if (i < N) {
            bcnt++; 
            i++;
        }
        while (i < N - 1 && A[i] < A[i + 1]) {
            i++;
        }
        if (i < N) {
            bcnt++;
            i++;
        }
    }

    return bcnt;
}

int main() {
    int N;
    scanf("%d", &N);

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int output = b_cnt(N, A);
    printf("%d\n", output);
}

#include <stdio.h>

int rto(int N, int mtrxx[][N], int M) {
    int temp;
    for (int k = 0; k < M; k++) {
        for (int i = 0; i < N / 2; i++) {
            for (int j = i; j < N - i - 1; j++) {
                temp = mtrxx[i][j];
                mtrxx[i][j] = mtrxx[j][N - 1 - i];
                mtrxx[j][N - 1 - i] = mtrxx[N - 1 - i][N - 1 - j];
                mtrxx[N - 1 - i][N - 1 - j] = mtrxx[N - 1 - j][i];
                mtrxx[N - 1 - j][i] = temp;
            }
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        int mtrxx[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &mtrxx[i][j]);
            }
        }

        rto(N, mtrxx, M % 4);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                printf("%d ", mtrxx[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

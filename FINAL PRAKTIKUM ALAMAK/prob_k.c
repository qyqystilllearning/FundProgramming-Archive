#include <stdio.h>
#include <string.h>

void pwen(char *S, int K) {
    int len = strlen(S);
    for (int i = 0; i < len; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = 'a' + (S[i] - 'a' + K) % 26;
        }
    }
}

int main() {
    char pwpwpwpw[100];
    int K;

    scanf("%s", pwpwpwpw);
    scanf("%d", &K);

    pwen(pwpwpwpw, K);

    printf("%s", pwpwpwpw);

    return 0;
}
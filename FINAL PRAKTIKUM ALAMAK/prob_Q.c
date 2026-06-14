    #include <stdio.h> //just to save you i give
#include <string.h> //ALL OF ME

int sqr(int xibal) {
    int output = 1;
    for (int i = 0; i < xibal; i++) {
        output *= 2;
    }
    return output;
}

void btt(char BNR[]) {
    int jml = 0;
    int p = 7;
    const int dOwO = 8;

    for (int i = 0; i < dOwO; i++) {
        jml += (BNR[i] - '0') * (sqr(p));
        p--;
    }
    printf("%c", jml); 
}

void ttb(char ascii) {

    int p = ascii;
    char BNR[8];
    for(int i = 0; i < 8; i++){
        BNR[i] = p % 2 + '0';
        p /= 2;
    }
    for(int i = 7; i >- 1; i--){
        printf("%c", BNR[i]);
    }
    }

int main() {
    int c;
    scanf("%d", &c);
    if (c == -1) {
        char BNR[2001];
        scanf("%s", BNR);
        for (int i = 0; i < strlen(BNR); i += 8) {
        char BJIR[9];
        strncpy(BJIR, BNR + i, 8);
        BJIR[8] = '\0';
        btt(BJIR);
        }
    } else if (c == 1) { 
        char TXTT;
        getchar(); 

        while(scanf("%c", &TXTT) != EOF){
        ttb(TXTT);
    }
    return 0;
}
}
#include <stdio.h>

int fibonachi(int n) {
    int fibo[101];
    fibo[0] = 2; fibo[1] = 3;
        for (int j = 2; j <= n; j++) {
            fibo[j] = fibo[j - 1] + fibo[j - 2];
        }
    return fibo[n];
    }

int wave(int m){
    if (m == 0){
        printf(">>\n");
    }else{
        wave(m - 1);
        for (int i = 1; i <= fibonachi(m); i++){
            printf(">");
        }printf("\n");
    wave(m - 1);
    } 
}    
int main(){
    int m;
    scanf("%d", &m);
    wave(m);
    
    return 0;
}
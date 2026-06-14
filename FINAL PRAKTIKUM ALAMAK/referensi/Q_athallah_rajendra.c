#include <stdio.h> // AC
#include <string.h>

void toBinary(char a){
    int x = a;
    char binary[8];
    for(int i=0;i<8;i++){
        binary[i] = x%2 + '0';
        x/=2;
    }
    for(int i=7;i>-1;i--){
        printf("%c", binary[i]);
    }
}

int power2(int x){
    int res=1;
    for(int i=0;i<x;i++){
        res*=2;
    }
    return res;
}

void fromBinary(char bin[]){
    int x = 7;
    int sum = 0;
    for(int i=0;i<8;i++){
        sum += (bin[i] - '0') * power2(x);
        x--;
    }
    printf("%c", sum);
}

int main(){
    int c;
    scanf("%d", &c);
    if (c==1){
        char a;
        getchar(); 
        while(scanf("%c", &a) != EOF){
            toBinary(a);
        }
    }

    else {
        char biner[2001];
        scanf("%s", biner);
        char substring[9];
        for (int i=0; i<strlen(biner);i+=8){
            strncpy(substring, biner+i, 8);
            substring[8] = '\0';
            fromBinary(substring);
        }
    }
}
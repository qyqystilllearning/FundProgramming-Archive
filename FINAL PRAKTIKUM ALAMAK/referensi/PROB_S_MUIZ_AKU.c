#include <stdio.h>//ini susah pol
#include <string.h>//bismillah ac

struct desc {
    char sex;
    char asma[999];
    int hp;
    double att; 
};

int funcsbeve(struct desc chmpin[], int x, int y){
    int sbeve = 0;
    if (chmpin[x].sex == chmpin[y].sex) {sbeve++;}
        if (strcmp(chmpin[x].asma, chmpin[y].asma) == 0){sbeve++;}
            if (chmpin[x].hp == chmpin[y].hp) {sbeve++;}
                if (chmpin[x].att == chmpin[y].att) {sbeve++;}          
    return sbeve >= 2;
}

int main(){
    int n;
    scanf("%d", &n); 
    
    struct desc chmpin[n]; 
    
    for (int i = 0; i < n; i++){
        scanf("%d %lf %c %[^\n]", &chmpin[i].hp, &chmpin[i].att, &chmpin[i].sex, chmpin[i].asma);
    }

    int litt[n * n]; 

    int cntlitt = 0;
    for (int i = 0; i < n / 2; i++){
        int j = n - i - 1;
        if (!funcsbeve(chmpin, i, j)){
            litt[cntlitt++] = i + 1;
            litt[cntlitt++] = j + 1;
        }
    }

    for (int i = 0; i < cntlitt; i++){
        for (int j = i + 1; j < cntlitt; j++){
            if (litt[i] > litt[j]){
                int temp = litt[i];
                litt[i] = litt[j];
                litt[j] = temp;
            }
        }
    }

    if (cntlitt > 0){
        printf("Sebentar Dewi Shita, belum palindrom nih.\n");
        for (int i = 0; i < cntlitt; i++){
            if (i == 0 || litt[i] != litt[i - 1]){
                printf("%d ", litt[i]);
            }
        }
        printf("\n");
    } 
    else{
        printf("Siap perang, Dewi Shita!\n");
    }

    return 0;
}

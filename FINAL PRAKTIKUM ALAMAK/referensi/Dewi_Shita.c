#include <stdio.h>
#include <string.h>

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

int main() {
    int numHeroes; 
    scanf("%d", &numHeroes);

    int i, j;
    int isPalindrom = 1;
    int wrongHeroes[1000];
    int wrongCount = 0;

    struct desc heroes[numHeroes];

    for (i = 0; i < numHeroes; i++) {
        scanf(" %d %f %c %[^\n]", &heroes[i].hp, &heroes[i].att, &heroes[i].sex, heroes[i].asma);
        
        int isSame = 0;
        for (j = i - 1; j >= 0; j--) { 
            if (funcsbeve(heroes, i, j)) { 
                isSame = 1;
                break;
            }
        }

        if (!isSame) {
            isPalindrom = 0;
            wrongHeroes[wrongCount] = i + 1;
            wrongCount++;
        }
    }

    if (isPalindrom) {
        printf("Siap perang, DewiShita!\n");
    } else {
        printf("Sebentar Dewi Shita, belum palindrom nih.\n");
        for (i = 0; i < wrongCount; i++) {
            printf("%d ", wrongHeroes[i]);
        }
        printf("\n");
    }

    return 0;
}

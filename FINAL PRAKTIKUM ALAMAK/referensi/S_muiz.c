//FP-S//
//Muiz Surya Fata_5025231005//
#include <stdio.h>
#include <string.h>

struct Pahlawan {
    int health;
    double attack;
    char gender;
    char name[150];
};
int palindrome(struct Pahlawan heroes[], int i, int j){
    int similcount = 0;
    if (heroes[i].health == heroes[j].health) {
        similcount++;
    }
    if (heroes[i].attack == heroes[j].attack) {
        similcount++;
    }
    if (heroes[i].gender == heroes[j].gender) {
        similcount++;
    }
    if (strcmp(heroes[i].name, heroes[j].name) == 0){
        similcount++;
    }
    return similcount >= 2;
}

void checker(struct Pahlawan heroes[], int n){
    int incor[n]; 
    int incorcount = 0;
    for (int i = 0; i < n/2; i++){
        int j = n-i-1;
        if (!palindrome(heroes, i, j)){
            incor[incorcount++] = i+1;
            incor[incorcount++] = j+1;
        }
    }
    for (int i = 0; i < incorcount; i++){
        for (int j = i+1; j < incorcount; j++){
            if (incor[i] > incor[j]){
                int temp = incor[i];
                incor[i] = incor[j];
                incor[j] = temp;
            }
        }
    }
    if (incorcount > 0){
        printf("Sebentar Dewi Shita, belum palindrom nih.\n");
        for (int i = 0; i < incorcount; i++){
            if (i == 0 || incor[i] != incor[i-1]){
                printf("%d ", incor[i]);
            }
        }
        printf("\n");
    } 
    else{
        printf("Siap perang, Dewi Shita!\n");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    struct Pahlawan heroes[n]; 
    for (int i = 0; i < n; i++){
        scanf("%d %lf %c %[^\n]", &heroes[i].health, &heroes[i].attack, &heroes[i].gender, heroes[i].name);
    }
    
    checker(heroes, n);
    return 0;
}


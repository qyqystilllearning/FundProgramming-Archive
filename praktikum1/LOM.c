#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2, md, mdp;
    int distancex, distancey;

    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);

    double ed, truncEd;
    mdp = pow(abs(x1 - x2),2) + pow(abs(y1 - y2),2);
    distancex = abs(x1 - x2);
    distancey = abs(y1 - y2);
    md = distancex + distancey;
    ed = sqrt(mdp);
    truncEd = trunc(ed);

    if (distancex == 0 && distancey == 0) {
        printf("You are living in Mystico!");
        return 0;
    } 
    if (ed == truncEd){
        printf("You are %d km away from Mystico!\n", (int)ed);
        printf("Go Straight for %d km!\n", (int)ed);
        return 0;
    } else {
        printf("You are %d km away from Mystico!\n", md);
    }
    if (x1 < x2) {
        printf("Go East for %d km, ", distancex);
    }
    if (x1 > x2) {
        printf("Go West for %d km, ", distancex);
    }
    if (y1 < y2) {
        printf("Then Go North for %d km", distancey);
    }
    if (y1 > y2) {
        printf("Then Go South for %d km", distancey);
    } 
        return 0;
} 

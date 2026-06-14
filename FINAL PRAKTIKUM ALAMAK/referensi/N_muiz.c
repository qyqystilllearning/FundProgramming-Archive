//FP-N//
//Muiz Surya Fata_5025231005//
#include <stdio.h>

int day_need(int* WE, int n, int energy){
    int day = 0;
    int energy_now = 0;

    for (int i = 0; i < n; i++){
        energy_now += WE[i];
        if (energy_now > energy){
            energy_now = WE[i];
            day++;
        }
    }
    return day+1;
}

int energy_min(int* WE, int n, int h){
    int max_WE = 0;
    for (int i = 0; i < n; i++){
        if (WE[i] > max_WE){
            max_WE = WE[i];
        }
    }
    int low = max_WE;
    int high = 1000000;
    while (low <= high){
        int day = day_need(WE, n, low);
        if (day <= h){
            return low;
        }
        low++;
    }
    return -1; 
}

int main(){
    int n, h;
    scanf("%d %d", &n, &h);

    int WE[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &WE[i]);
    }
    
    int e_min = energy_min(WE, n, h);
    printf("%d\n", e_min);

    return 0;
}

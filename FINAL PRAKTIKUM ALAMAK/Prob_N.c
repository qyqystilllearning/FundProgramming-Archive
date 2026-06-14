#include <stdio.h>

int main() {
    int N, H;
    scanf("%d %d", &N, &H);
    int abott[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &abott[i]);
    }

    int kiwo = abott[0];
    int tengen = 0;

    for (int i = 0; i < N; i++) {
        if (abott[i] > kiwo) {
            kiwo = abott[i];
        }
        tengen += abott[i];
    }

    int metuneiki = kiwo;
    
    while (kiwo < tengen) {
        int meso = (kiwo + tengen) / 2;
        int dino = 1;
        int beratsekarang = 0;

        for (int i = 0; i < N; i++) {
            beratsekarang += abott[i];
            if (beratsekarang > meso) {
                dino++;
                beratsekarang = abott[i];
            }
        }

        if (dino > H) {
            kiwo = meso + 1;
        } else {
            metuneiki = meso;
            tengen = meso;
        }
    }

    printf("%d\n", metuneiki);

    return 0;
}
#include <stdio.h>//bismillah
#include <string.h>//ac 5

struct Item {
    int id;
    char name[101];
    int price;
    int quality;
};

struct Item saiko_P_q(struct Item items[], int N, int mode) {
    struct Item saiko = items[0];

    for (int i = 1; i < N; i++) {
        if (mode == 0) { 
            if (items[i].price < saiko.price || (items[i].price == saiko.price && items[i].id < saiko.id)) {
                saiko = items[i];
            }
        } else if (mode == 1) { 
            if (items[i].quality > saiko.quality || (items[i].quality == saiko.quality && items[i].id < saiko.id)) {
                saiko = items[i];
            }
        }
    }
    return saiko;
}

int main() {
    int N;
    scanf("%d", &N);

    struct Item items[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %s %d %d", &items[i].id, items[i].name, &items[i].price, &items[i].quality);
    }

    struct Item saiko_dakara = saiko_P_q(items, N, 0);

    printf("Best item for price is: %d %s %d %d\n", saiko_dakara.id, saiko_dakara.name, saiko_dakara.price, saiko_dakara.quality);

    saiko_dakara = saiko_P_q(items, N, 1); 
    printf("Best item for quality is : %d %s %d %d\n", saiko_dakara.id, saiko_dakara.name, saiko_dakara.price, saiko_dakara.quality);

    return 0;
}

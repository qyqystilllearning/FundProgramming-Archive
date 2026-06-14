#include <stdio.h>
//koktimelimithzzz
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int pbg = gcd(X, Y);

    int dct = 0;
    int temp = pbg;
    while (temp != 0) {
        temp /= 10;
        dct++;
    }

    if (dct % 2 == 0) {
        printf("Yey brankas berhasil dibuka :D");
    } else {
        printf("Yah gagal :(");
    }

    return 0;
}

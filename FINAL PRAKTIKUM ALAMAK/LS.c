#include <stdio.h> //bismillah
#include <math.h> //bisaa
#include <stdlib.h> //ac 3

double more(int x_u, int y_u, int x_r, int y_r) {
    double allout = sqrt(pow(abs(x_u - x_r), 2) + pow(abs(y_u - y_r), 2));
    return allout;
}

int main() {
    int w_m, h_m, x_r, y_r, w_r, h_r, x_u, y_u;

    scanf("%d %d", &w_m, &h_m);
    scanf("%d %d %d %d", &x_r, &y_r, &w_r, &h_r);
    scanf("%d %d", &x_u, &y_u);

    double allout = more(x_u, y_u, x_r, y_r);

    if (x_u >= x_r - w_r / 2 && x_u <= x_r + w_r / 2 && y_u >= y_r - h_r / 2 && y_u <= y_r + h_r / 2) {
        printf("KAMU SUDAH SAMPAI\n");
    } else {
        printf("%.2f METER LAGI\n", allout);
    }

    return 0;
}

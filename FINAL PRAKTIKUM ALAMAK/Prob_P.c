#include <stdio.h>//kukira simpel ternyata sempel bismillah ac :)

double kakeanpola(int n, double ongko[]) {
    double a_satu, a_dua, a_tiga, a_empat, a_lima;

    double outpt = 0;
    if (n == 1) {
        outpt = ongko[0];
    } else if (n == 2) {
        a_dua = ongko[1] - ongko[0];
        ongko[2] = a_dua + ongko[1];
        outpt = ongko[2];
    } else if (n == 3) {
        a_satu = ((ongko[2] - ongko[1]) - (ongko[1] - ongko[0])) / 2;
        a_dua = ongko[1] - ongko[0] - 3 * a_satu;
        a_tiga = ongko[0] - (a_satu + a_dua);
        ongko[3] = (16 * a_satu) + (4 * a_dua) + (a_tiga);
        outpt = ongko[3];
    } else if (n == 4) {
        a_satu = (((ongko[3] - ongko[2]) - (ongko[2] - ongko[1])) - ((ongko[2] - ongko[1]) - (ongko[1] - ongko[0]))) / 6;
        a_dua = ((ongko[2] - ongko[1]) - (ongko[1] - ongko[0]) - (12 * a_satu)) / 2;
        a_tiga = (ongko[1] - ongko[0]) - ((7 * a_satu) + (3 * a_dua));
        a_empat = ongko[0] - (a_satu + a_dua + a_tiga);
        ongko[4] = (125 * a_satu) + (25 * a_dua) + (5 * a_tiga) + a_empat;
        outpt = ongko[4];
    } else if (n == 5) {
        a_satu = ((((ongko[4] - ongko[3]) - (ongko[3] - ongko[2])) - ((ongko[3] - ongko[2]) - (ongko[2] - ongko[1]))) - (((ongko[3] - ongko[2]) - (ongko[2] - ongko[1])) - ((ongko[2] - ongko[1]) - (ongko[1] - ongko[0])))) / 24;
        a_dua = (((ongko[3] - ongko[2]) - (ongko[2] - ongko[1])) - ((ongko[2] - ongko[1]) - (ongko[1] - ongko[0])) - (60 * a_satu)) / 6;
        a_tiga = ((ongko[2] - ongko[1]) - (ongko[1] - ongko[0]) - ((50 * a_satu) + (12 * a_dua))) / 2;
        a_empat = ((ongko[1] - ongko[0]) - ((15 * a_satu) + (7 * a_dua) + (3 * a_tiga)));
        a_lima = ongko[0] - (a_satu + a_dua + a_tiga + a_empat);
        ongko[5] = (1296 * a_satu) + (216 * a_dua) + (36 * a_tiga) + (6 * a_empat) + a_lima;
        outpt = ongko[5];
    }
    return outpt;
}

int main() {
    int n;
    scanf("%d", &n);

    double ongko[999]; 

    for (int i = 0; i < n; i++) {
        scanf("%lf", &ongko[i]); 
    }

    double outpt = kakeanpola(n, ongko);

    printf("%.0lf\n", outpt); 

    return 0;
}

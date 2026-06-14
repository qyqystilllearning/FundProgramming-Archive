#include <stdio.h>
#include <math.h>

#define lli unsigned long long int

void fp_itu_sementara(lli sabar, lli tidak_boleh_emosi) {
    int RZZ = 0;
    int BZZ = 0;
    int WZZ = 0;
    lli iya_itu_kunci_sukses = sabar & tidak_boleh_emosi;

    if (sabar % tidak_boleh_emosi == 0 || tidak_boleh_emosi % sabar == 0) {
        RZZ = 1;
    }

    if (iya_itu_kunci_sukses == sabar || iya_itu_kunci_sukses == tidak_boleh_emosi) {
        BZZ = 1;
    }
    if (iya_itu_kunci_sukses == 0) {
        WZZ = 1;
    }

    if (RZZ == 1) {
        printf("Rizz");
        if (BZZ == 1) {
            printf("Buzz\n");
        }
        else if (WZZ == 1) {
            printf("Wuzz\n");
        }
    }
    else if (RZZ == 0) {
        printf("Not Rizz");
        if (BZZ == 1) {
            printf(", but Buzz!\n");
        }
        else if (WZZ == 1) {
            printf(", but Wuzz!\n");
        }
    }
}

int main() {
    lli sabar;
    scanf("%llu", &sabar);
    
    lli tidak_boleh_emosi = 0;
    scanf("%llu", &tidak_boleh_emosi);

    fp_itu_sementara(sabar, tidak_boleh_emosi);

    return 0;
}

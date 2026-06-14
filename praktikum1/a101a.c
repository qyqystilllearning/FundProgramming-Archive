#include <stdio.h>

int main() {
    long tenad_num;
    int reg_num;

    scanf("%ld %d", &tenad_num, &reg_num);

    if (111111111111111111 <= tenad_num && tenad_num <= 999999999999999999) {
        if (0 < reg_num && reg_num <= 9){
        if (tenad_num * reg_num % 10 == 1){
            printf("yes, ...%ld in 10-adics is equal to 1/%d, very nice indeed", tenad_num, reg_num);
            }
        else {
            printf("well, turns out that ...%ld in 10-adics is unfortunately not equal to 1/%d", tenad_num, reg_num);
            }
        }
        else if (-9 <= reg_num && reg_num < 0){
        if (tenad_num * reg_num % 10 == 0){
            printf("Look!, ...%ld in 10-adics is equal to %d!", tenad_num, reg_num);
            } 
         else {
            printf("Hmm, it seems that ...%ld in 10-adics is sadly not equal to %d", tenad_num, reg_num);
            }
        }
    }

    return 0;
}

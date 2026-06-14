#include <stdio.h>

int main() {
    int S, LP;
    scanf("%d %d", &S, &LP);

    if (S > 25) {
        printf("You will fall soon!\n");
    } else if (S >= 15 && S <= 25) {
        printf("Don't be rash, Langit!\n");
    } else if (S >= 8 && S <= 15) {
        printf("Good speed! You can turn peacefully :)\n");
    } else if (S < 8) {
        printf("Oh no! The vehicles behind you went mad!\n");
    }

    if (LP < 100) {
        printf("Skip it!\n");
    }
    else if (LP >= 100 && LP <= 9999) {
        int sum_LP = (LP / 18) + (LP / 6);
        if ((sum_LP >= 'A' && sum_LP <= 'Z') || (sum_LP >= 'a' && sum_LP <= 'z')) {
            printf("Cool, the alphabet is %c\n", sum_LP);
        }
        else {
            printf("Not cool, blah blah blah.\n");
        }
    } 
    else {
        printf("Invalid license plate!\n");
    }

    return 0;
}
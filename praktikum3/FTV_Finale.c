#include <stdio.h>
#include <string.h>

char first_upp_letter(const char input[]) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            return input[i];
        }
    }
    return '\0';  
}

int main() {
    int t;
    scanf("%d", &t);
    getchar();  

    for (int j = 0; j < t; j++) {
        char input[100];
        scanf("%s", input);

        char res_first_upp_letter = first_upp_letter(input);
        if (res_first_upp_letter != '\0') {
            printf("From the vault: \"%s\", we get %c\n", input, res_first_upp_letter);
        } else {
            printf("No cap, it's an original one: \"%s\"\n", input);
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char msg[100];
    char phrase[100];
    scanf("%s", msg);
    scanf("%s", phrase);

    for (int i = 0; msg[i] != '\0'; i++) {
        if (msg[i] == '_') {
            for (int j = i; msg[j] != '\0'; j++) {
                msg[j] = msg[j + 1];
            }
        }
    }
    
    for (int i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] == '_') {
            for (int j = i; phrase[j] != '\0'; j++) {
                phrase[j] = phrase[j + 1];
            }
        }
    }

    char pass[100];
int counter = 0;
int j = 0;

for (int i = 0; i < (int)strlen(msg); i++) {
    if (counter < (int)strlen(phrase) && msg[i] == phrase[counter]) {
        counter++;
    } else {
        pass[j] = msg[i];
        j++;
    }
}
pass[j] = '\0';

if (counter == (int)strlen(phrase) || pass[0] == '\0') {
    printf("Can't get the password :(\n");
} else {
    printf("%s\n", pass);
}

return 0;
}

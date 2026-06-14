#include <stdio.h>
#include <string.h>

int main() {
    char message[100], phrase[100];
    scanf("%s", message);
    scanf("%s", phrase);

    for (int i = 0; message[i] != '\0'; i++) {
        if (message[i] == '_') {
            for (int j = i; message[j] != '\0'; j++) {
                message[j] = message[j + 1];
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

    char password[100];
    int message_pointer = 0, phrase_pointer = 0, password_pointer = 0;

    while (message[message_pointer] != '\0') {
        if (message[message_pointer] == phrase[phrase_pointer]) {
            message_pointer++;
            phrase_pointer++;
        } else {
            password[password_pointer] = message[message_pointer];
            message_pointer++;
            password_pointer++;
        }
    }

    password[password_pointer] = '\0';

    if (phrase[phrase_pointer] == '\0') {
        printf("%s\n", password);
    } else {
        printf("Can't get the password :(\n");
    }

    return 0;
}
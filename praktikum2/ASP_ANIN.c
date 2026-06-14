#include <stdio.h>
#include <string.h>

int main() {
    char msg[100];
    scanf("%s", msg);

    char phrase[100];
    scanf("%s", phrase);

    char pass[100];
    int counter = 0;
    int j = 0;

    for (int i = 0; i < (int)strlen(msg); i++) {
        if (msg[i] == '_' || (msg[i] >= 'A' && msg[i] <= 'Z')) {
            pass[j] = msg[i];  // Add the character to pass
            j++;
        } else {
            if (phrase[counter] == '_' || (phrase[counter] >= 'A' && phrase[counter] <= 'Z')) {
                counter++;
            }
            if (msg[i] == phrase[counter]) {
                counter++;
            } else {
                pass[j] = msg[i];
                j++;
            }
        }
    }
    pass[j] = '\0';
    printf("%s\n", pass);
    return 0;
}

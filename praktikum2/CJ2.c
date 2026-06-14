#include <stdio.h>
#include <string.h>

int main() {
    int numInputs, inputValues[100], maxInputIndex = 0;
    char inputString[100], stringArray[1000][1000];
   
    while (1) {
        scanf("%d", &numInputs);

        if (numInputs == 0) {
            break; 
        } else if (numInputs == 1 || numInputs == 2) {
            scanf("%s", inputString);

            inputValues[maxInputIndex] = numInputs;
            strcpy(stringArray[maxInputIndex], inputString);
            maxInputIndex++;
        }
    }

    for (int i = 0; i < maxInputIndex; i++) {
        numInputs = inputValues[i];
        strcpy(inputString, stringArray[i]);

        if (numInputs == 1) {
            int length = strlen(inputString);
            for (int j = 0; j < length / 2; j++) {
                char temp = inputString[j];
                inputString[j] = inputString[length - j - 1];
                inputString[length - j - 1] = temp;
            }
            printf("The Aloos said: %s\n", inputString);
        } 
        else if (numInputs == 2) {
            int length = strlen(inputString);
            int isPalindrome = 1;
    
            for (int j = 0; j < length / 2; j++) {
                if (inputString[j] != inputString[length - j - 1]) {
                    isPalindrome = 0;
                    break;
                }
            }

            if (isPalindrome) {
                printf("Seems we have something in common\n");
            } 
            else {
                printf("Maybe we don't\n");
            }
        }
    }

    printf("Let's show this to DJ\nJD ot siht wohs steL\n");
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct CultMem {
    char name[2048];
    struct CultMem* next;
};

struct CultMem* bond_list(char names[][2048], int n) {
    struct CultMem* head = NULL;
    struct CultMem* current = NULL;

    for (int i = 0; i < n; i++) {
        struct CultMem* new_member = (struct CultMem*)malloc(sizeof(struct CultMem));
        strcpy(new_member->name, names[i]);
        new_member->next = NULL;

        if (head == NULL) {
            head = new_member;
            current = new_member;
        } else {
            current->next = new_member;
            current = current->next;
        }
    }
    return head;
}

char* find_sequence(struct CultMem* head, char* str1, char* str2) {
    struct CultMem* current = head;
    char* sequence = (char*)malloc(2048 * 2048 * sizeof(char));
    sequence[0] = '\0';

    int found1 = 0, found2 = 0;

    while (current != NULL) {
        if (strcmp(current->name, str1) == 0) {
            found1 = 1;
            strcat(sequence, str1);
            if (strcmp(str1, str2) != 0) {
                strcat(sequence, "->");
            }
        } else if (found1 && strcmp(current->name, str2) == 0) {
            found2 = 1;
            strcat(sequence, str2);
            break;
        } else if (found1) {
            strcat(sequence, current->name);
            strcat(sequence, "->");
        }
        current = current->next;
    }

    return sequence;
}


int main() {
    int n;
    scanf("%d", &n);

    char names[n][2048];
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    char str1[2048], str2[2048];
    scanf("%s %s", str1, str2);

    struct CultMem* head = bond_list(names, n);
    char* result = find_sequence(head, str1, str2);
    printf("%s\n", result);

    free(result);

    return 0;
}
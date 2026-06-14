#include <stdio.h>

const int MAX_CONTACTS = 100;

struct Contact {
    int ID;
    char name[31];
};

int can_reach(int link[MAX_CONTACTS][MAX_CONTACTS], int start, int end, int visited[MAX_CONTACTS]) {
    if (start == end)
        return 1;

    visited[start] = 1; 

    for (int i = 0; i < MAX_CONTACTS; i++) {
        if (link[start][i] && !visited[i] && can_reach(link, i, end, visited))
            return 1; 
    }

    return 0; 
}

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int relations[MAX_CONTACTS][MAX_CONTACTS];
    int visited[MAX_CONTACTS];

    int sect1, sect2, sect3;
    scanf("%d", &sect1);

    for (int i = 0; i < sect1; i++) {
        scanf("%d %s", &contacts[i].ID, contacts[i].name);
    }

    for (int i = 0; i < MAX_CONTACTS; i++) {
        visited[i] = 0;
        for (int j = 0; j < MAX_CONTACTS; j++) {
            relations[i][j] = 0;
        }
    }

    scanf("%d", &sect2);
    for (int i = 0; i < sect2; i++) {
        int ID_A, ID_B;
        scanf("%d %d", &ID_A, &ID_B);
        relations[ID_A][ID_B] = 1;
        relations[ID_B][ID_A] = 1;
    }

    scanf("%d", &sect3);
    for (int i = 0; i < sect3; i++) {
        int ID_A, ID_B;
        scanf("%d %d", &ID_A, &ID_B);

        if (can_reach(relations, ID_A, ID_B, visited)) {
            printf("%s can reach %s\n", contacts[ID_A].name, contacts[ID_B].name);
        } else {
            printf("We need more transponder snail\n");
        }
        
        for (int j = 0; j < MAX_CONTACTS; j++) {
            visited[j] = 0;
        }
    }

    return 0;
}
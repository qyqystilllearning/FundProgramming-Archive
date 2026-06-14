#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact {
    int ID;
    char name[31];
};

int can_reach(int **link, int start, int end, int *visited, int contacts_count) {
    if (start == end)
        return 1;

    visited[start] = 1;

    for (int i = 0; i < contacts_count; i++) {
        if (link[start][i] && !visited[i] && can_reach(link, i, end, visited, contacts_count))
            return 1;
    }

    return 0;
}

int main() {
    int contacts_count;
    scanf("%d", &contacts_count);

    struct Contact *contacts = (struct Contact *)malloc(contacts_count * sizeof(struct Contact));
    int **relations = (int **)malloc(contacts_count * sizeof(int *));
    for (int i = 0; i < contacts_count; i++) {
        relations[i] = (int *)calloc(contacts_count, sizeof(int));
    }
    int *visited = (int *)calloc(contacts_count, sizeof(int));

    for (int i = 0; i < contacts_count; i++) {
        scanf("%d %s", &contacts[i].ID, contacts[i].name);
    }

    int relations_count;
    scanf("%d", &relations_count);
    for (int i = 0; i < relations_count; i++) {
        int ID_A, ID_B;
        scanf("%d %d", &ID_A, &ID_B);
        relations[ID_A][ID_B] = 1;
        relations[ID_B][ID_A] = 1;
    }

    int queries_count;
    scanf("%d", &queries_count);
    for (int i = 0; i < queries_count; i++) {
        int ID_A, ID_B;
        scanf("%d %d", &ID_A, &ID_B);

        if (can_reach(relations, ID_A, ID_B, visited, contacts_count)) {
            printf("%s can reach %s\n", contacts[ID_A].name, contacts[ID_B].name);
        } else {
            printf("We need more transponder snail\n");
        }

        memset(visited, 0, contacts_count * sizeof(int));
    }

    for (int i = 0; i < contacts_count; i++) {
        free(relations[i]);
    }
    free(relations);
    free(contacts);
    free(visited);

    return 0;
}

#include <stdio.h>

struct Variant {
    char name[100];
    char gender[100];
    int year;
    char title[100];
    int statusCode;
};

void show_variant(struct Variant z) {
    printf("Name: %s\n", z.name);
    printf("Gender: %s\n", z.gender);
    printf("Year: %d\n", z.year);
    printf("Title: %s\n", z.title);
    printf("Status: ");

    if (z.statusCode == 1) {
        printf("Alive\n");
    } else if (z.statusCode == 2) {
        printf("Deceased\n");
    } else {
        printf("Unknown\n");
    }
}

int main() {
    int T;
    scanf("%d", &T);

    struct Variant z[T]; 
    
    for (int i = 0; i < T; i++) {
        getchar(); 
        scanf(" %[^\n]", z[i].name);
        getchar(); 
        scanf(" %[^\n]", z[i].gender);
        scanf("%d", &z[i].year);
        getchar(); 
        scanf("     %[^\n]", z[i].title);
        scanf("%d", &z[i].statusCode);
    }

    for (int i = 0; i < T; i++) {
        show_variant(z[i]);
    }

    return 0;
}

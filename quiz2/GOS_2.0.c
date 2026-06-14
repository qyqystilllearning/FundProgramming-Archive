#include <stdio.h>

struct Variant {
    char name[100];
    char gender[20];
    int year;
    char title[100];
    int status;
};

const int ALIVE_STATUS = 1;
const int DECEASED_STATUS = 2;
const int UNKNOWN_STATUS = 3;

char* getStatus(int status) {
    const char* ALIVE = "Alive";
    const char* DECEASED = "Deceased";
    const char* UNKNOWN = "Unknown";

    if (status == ALIVE_STATUS) {
        return ALIVE;
    } else if (status == DECEASED_STATUS) {
        return DECEASED;
    } else {
        return UNKNOWN;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    getchar(); 
    for (int i = 0; i < T; i++) {
        struct Variant variant;
        
        scanf("%99[^\n]%*c", variant.name);
        scanf("%19[^\n]%*c", variant.gender);

        scanf("%d%*c", &variant.year);

        scanf("%99[^\n]%*c", variant.title);

        scanf("%d%*c", &variant.status);
        getchar(); 

        printf("Name: %s\n", variant.name);
        printf("Gender: %s\n", variant.gender);
        printf("Year: %d\n", variant.year);
        printf("Title: %s\n", variant.title);
        printf("Status: %s\n", getStatus(variant.status));
    }
    return 0;
}
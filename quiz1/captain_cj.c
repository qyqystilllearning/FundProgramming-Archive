#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int d, north, east, south, west, max1, max2;

    scanf("%d", &d);

    west = d % 10;
    d /= 10;
    east = d % 10;
    d /= 10;
    south = d % 10;
    d /= 10;
    north = d % 10;

    char dir1[10], dir2[10];

    if (north > south) {
        max1 = north;
        strcpy(dir1, "north");
    } else {
        max1 = south;
        strcpy(dir1, "south");
    }

    if (east > west) {
        max2 = east;
        strcpy(dir2, "east");
    } else {
        max2 = west;
        strcpy(dir2, "west");
    }
    if (north > south && east > west) {
        printf("Captain CJ, we must go towards northeast\n");
    } 
    if (north > south && west > east) {
        printf("Captain CJ, we must go towards northwest\n");
    }
    if (south > north && east > west) {
        printf("Captain CJ, we must go towards southeast\n");
    }
    if (south > north && west > east ) {
        printf("Captain CJ, we must go towards southwest\n");
    }
    
    int danger_level_all = north + east + south + west;
    int danger_level_direction = (max1 + max2);
    float strength_wind = (double)danger_level_direction / danger_level_all;

    printf("The strength of wind is only %.2lf captain!\n", strength_wind);

    return 0;
}

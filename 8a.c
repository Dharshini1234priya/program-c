#include <stdio.h>

struct Point {
    int x;
    int y;
};

int arePointsEqual(struct Point p1, struct Point p2) {
    if (p1.x == p2.x && p1.y == p2.y) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    struct Point point1, point2;

    printf("Enter the coordinates for the first point (x y): ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Enter the coordinates for the second point (x y): ");
    scanf("%d %d", &point2.x, &point2.y);

    if (arePointsEqual(point1, point2)) {
        printf("The points are equal.\n");
    } else {
        printf("The points are not equal.\n");
    }

    return 0;
}



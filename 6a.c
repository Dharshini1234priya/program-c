#include <stdio.h>

float calculateArea(float side) {
    return side * side;
}

float calculatePerimeter(float side) {
    return 4 * side;
}

int main() {
    float side, area, perimeter;

    printf("Enter the side length of the square: ");
    scanf("%f", &side);

    area = calculateArea(side);
    perimeter = calculatePerimeter(side);

    printf("Area of the square: %.2f\n", area);
    printf("Perimeter of the square: %.2f\n", perimeter);

    return 0;
}


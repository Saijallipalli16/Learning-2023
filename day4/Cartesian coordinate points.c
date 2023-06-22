
#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

float calculateDistance(Point p1, Point p2) {
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    Point p1, p2;

    printf("Enter the coordinates of Point 1:\n");
    printf("x-coordinate: ");
    scanf("%f", &p1.x);
    printf("y-coordinate: ");
    scanf("%f", &p1.y);

    printf("\nEnter the coordinates of Point 2:\n");
    printf("x-coordinate: ");
    scanf("%f", &p2.x);
    printf("y-coordinate: ");
    scanf("%f", &p2.y);

    float distance = calculateDistance(p1, p2);

    printf("\nDistance between the points: %.2f\n", distance);

    return 0;
}

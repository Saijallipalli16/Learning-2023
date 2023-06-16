#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char temp[size];
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
}

int main() {
    int int1, int2;
    printf("Enter two integers: ");
    scanf("%d %d", &int1, &int2);

    swap(&int1, &int2, sizeof(int));
    printf("After swapping: %d %d\n", int1, int2);

    float float1, float2;
    printf("Enter two floats: ");
    scanf("%f %f", &float1, &float2);

    swap(&float1, &float2, sizeof(float));
    printf("After swapping: %f %f\n", float1, float2);

    char char1, char2;
    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);

    swap(&char1, &char2, sizeof(char));
    printf("After swapping: %c %c\n", char1, char2);

    return 0;
}


#include <stdio.h>

// Function to set a bit at the given position
unsigned char setBit(unsigned char num, int pos) {
    return num | (1 << pos);
}

// Function to clear a bit at the given position
unsigned char clearBit(unsigned char num, int pos) {
    return num & ~(1 << pos);
}

// Function to toggle a bit at the given position
unsigned char toggleBit(unsigned char num, int pos) {
    return num ^ (1 << pos);
}

int main() {
    unsigned char number;
    int position;

    printf("Enter an 8-bit number (in decimal): ");
    scanf("%hhu", &number);

    printf("Enter the position (0-7) of the bit: ");
    scanf("%d", &position);

    printf("\nBefore operations:\n");
    printf("Number in binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\nNumber in decimal: %d\n\n", number);

    number = setBit(number, position);
    printf("After setting the bit:\n");
    printf("Number in binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\nNumber in decimal: %d\n\n", number);

    number = clearBit(number, position);
    printf("After clearing the bit:\n");
    printf("Number in binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\nNumber in decimal: %d\n\n", number);

    number = toggleBit(number, position);
    printf("After toggling the bit:\n");
    printf("Number in binary: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    printf("\nNumber in decimal: %d\n\n", number);

    return 0;
}


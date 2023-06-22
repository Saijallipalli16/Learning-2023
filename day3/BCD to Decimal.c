#include <stdio.h>

// Function to convert decimal to BCD
unsigned char decimalToBCD(unsigned char decimal) {
    return ((decimal / 10) << 4) | (decimal % 10);
}

int main() {
    unsigned char decimal;

    printf("Enter a decimal number (0-99): ");
    scanf("%hhu", &decimal);

    if (decimal > 99) {
        printf("Invalid input. Please enter a decimal number between 0 and 99.\n");
        return 0;
    }

    printf("Decimal: %d\n", decimal);
    printf("BCD: %x\n", decimalToBCD(decimal));

    return 0;
}

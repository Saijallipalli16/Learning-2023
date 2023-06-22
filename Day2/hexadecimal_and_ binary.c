#include <stdio.h>
#include <stdint.h>

void printExponent(double num) {
    uint64_t* ptr = (uint64_t*)&num;
    uint64_t exponent = (*ptr >> 52) & 0x7FF;

    printf("Exponent (Hex): 0x%llX\n", exponent);

    printf("Exponent (Binary): 0b");
    for (int i = 11; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double num;
    printf("Enter a double value: ");
    scanf("%lf", &num);

    printExponent(num);

    return 0;
}

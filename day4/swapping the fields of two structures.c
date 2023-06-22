#include <stdio.h>

typedef struct {
    int field1;
    float field2;
    char field3;
} Structure;

void swapStructures(Structure* struct1, Structure* struct2) {
    Structure temp = *struct1;
    *struct1 = *struct2;
    *struct2 = temp;
}

int main() {
    Structure struct1, struct2;

    printf("Enter the values for Structure 1:\n");
    printf("Field 1: ");
    scanf("%d", &struct1.field1);
    printf("Field 2: ");
    scanf("%f", &struct1.field2);
    printf("Field 3: ");
    scanf(" %c", &struct1.field3);

    printf("\nEnter the values for Structure 2:\n");
    printf("Field 1: ");
    scanf("%d", &struct2.field1);
    printf("Field 2: ");
    scanf("%f", &struct2.field2);
    printf("Field 3: ");
    scanf(" %c", &struct2.field3);

    printf("\nBefore swapping:\n");
    printf("Structure 1: Field 1 = %d, Field 2 = %.2f, Field 3 = %c\n", struct1.field1, struct1.field2, struct1.field3);
    printf("Structure 2: Field 1 = %d, Field 2 = %.2f, Field 3 = %c\n", struct2.field1, struct2.field2, struct2.field3);

    // Swap the structures using pointers
    swapStructures(&struct1, &struct2);

    printf("\nAfter swapping:\n");
    printf("Structure 1: Field 1 = %d, Field 2 = %.2f, Field 3 = %c\n", struct1.field1, struct1.field2, struct1.field3);
    printf("Structure 2: Field 1 = %d, Field 2 = %.2f, Field 3 = %c\n", struct2.field1, struct2.field2, struct2.field3);

    return 0;
}


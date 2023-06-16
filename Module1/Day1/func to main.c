#include <stdio.h>

int performOperation(int number, char operationType) {
    int result;

    switch (operationType) {
        case '+':
            result = number + 10;  
            break;
        case '-':
            result = number - 5;  
            break;
        case '*':
            result = number * 2; 
            break;
        case '/':
            result = number / 3;  
            break;
        default:
            printf("Invalid operation type.\n");
            return 0;
    }

    return result;
}

int main() {
    int inputNumber;
    char operationType;
    int result;

    printf("Enter an integer: ");
    scanf("%d", &inputNumber);

    printf("Enter the operation type (+, -, *, /): ");
    scanf(" %c", &operationType);

    result = performOperation(inputNumber, operationType);
    printf("Result: %d\n", result);

    return 0;
}
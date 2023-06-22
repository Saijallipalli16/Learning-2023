#include <stdio.h>

// Structure to represent a complex number
typedef struct {
    float real;
    float imaginary;
} ComplexNumber;

// Function to read a complex number from the user
ComplexNumber readComplexNumber() {
    ComplexNumber number;
    printf("Enter the real part: ");
    scanf("%f", &number.real);
    printf("Enter the imaginary part: ");
    scanf("%f", &number.imaginary);
    return number;
}

// Function to write a complex number
void writeComplexNumber(ComplexNumber number) {
    printf("Complex number: %.2f + %.2fi\n", number.real, number.imaginary);
}

// Function to add two complex numbers
ComplexNumber addComplexNumbers(ComplexNumber number1, ComplexNumber number2) {
    ComplexNumber result;
    result.real = number1.real + number2.real;
    result.imaginary = number1.imaginary + number2.imaginary;
    return result;
}

// Function to multiply two complex numbers
ComplexNumber multiplyComplexNumbers(ComplexNumber number1, ComplexNumber number2) {
    ComplexNumber result;
    result.real = (number1.real * number2.real) - (number1.imaginary * number2.imaginary);
    result.imaginary = (number1.real * number2.imaginary) + (number1.imaginary * number2.real);
    return result;
}

int main() {
    ComplexNumber number1, number2, sum, product;

    printf("Enter the first complex number:\n");
    number1 = readComplexNumber();

    printf("Enter the second complex number:\n");
    number2 = readComplexNumber();

    printf("\n");

    // Addition
    sum = addComplexNumbers(number1, number2);
    printf("Addition: ");
    writeComplexNumber(sum);

    // Multiplication
    product = multiplyComplexNumbers(number1, number2);
    printf("Multiplication: ");
    writeComplexNumber(product);

    return 0;
}

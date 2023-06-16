#include <stdio.h>
#include <string.h>

// Function to encode the given string
void encode(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] += 1; // Perform a simple substitution by incrementing each character by 1
        }
    }
}

// Function to decode the encoded string
void decode(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] != ' ') {
            str[i] -= 1; // Perform the reverse substitution by decrementing each character by 1
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character from the string
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Encode the string
    encode(str);
    printf("Encoded string: %s\n", str);

    // Decode the encoded string
    decode(str);
    printf("Decoded string: %s\n", str);

    return 0;
}

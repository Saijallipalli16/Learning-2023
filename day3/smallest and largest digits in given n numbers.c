#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of digits: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        int num, digit, smallest = 9, largest = 0;

        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num <= 0) {
            printf("Not Valid\n");
            continue;
        }

        while (num > 0) {
            digit = num % 10;
            smallest = (digit < smallest) ? digit : smallest;
            largest = (digit > largest) ? digit : largest;
            num /= 10;
        }

        printf("Smallest digit in number %d: %d\n", i, smallest);
        printf("Largest digit in number %d: %d\n", i, largest);
    }

    return 0;
}


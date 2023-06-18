#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;
    int power = 1;

    // Iterate over each digit from right to left
    while (num > 0) {
        int digit = num % 10;
        int reducedNum = (num / 10) * power + (num % power);
        if (reducedNum > largest) {
            largest = reducedNum;
        }
        power *= 10;
        num /= 10;
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNum = findLargestNumber(num);

    printf("The largest number after deleting a single digit: %d\n", largestNum);

    return 0;
}

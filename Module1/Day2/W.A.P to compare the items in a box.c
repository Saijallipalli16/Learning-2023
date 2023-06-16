#include <stdio.h>

int compareBoxes(int box1[], int box2[], int size) {
    int matchCount = 0;

    for (int i = 0; i < size; i++) {
        int currentItem = box1[i];
        int found = 0;

        for (int j = 0; j < size; j++) {
            if (box2[j] == currentItem) {
                found = 1;
                break;
            }
        }

        if (found) {
            matchCount++;
        }
    }

    return (matchCount == size);
}

int main() {
    int size;
    printf("Enter the size of the boxes: ");
    scanf("%d", &size);

    int box1[size];
    int box2[size];

    printf("Enter the items of Box 1:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &box1[i]);
    }

    printf("Enter the items of Box 2:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &box2[i]);
    }

    int result = compareBoxes(box1, box2, size);

    printf("Result: %d\n", result);

    return 0;
}

#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeAndSurfaceArea(struct Box *box) {
    float volume = box->length * box->width * box->height;
    float surfaceArea = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("Volume of the box: %.2f\n", volume);
    printf("Total surface area of the box: %.2f\n", surfaceArea);
}

int main() {
    struct Box myBox;

    printf("Enter the dimensions of the box:\n");
    printf("Length: ");
    scanf("%f", &myBox.length);
    printf("Width: ");
    scanf("%f", &myBox.width);
    printf("Height: ");
    scanf("%f", &myBox.height);

    calculateVolumeAndSurfaceArea(&myBox);

    return 0;
}

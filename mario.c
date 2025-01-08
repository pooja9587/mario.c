#include <stdio.h>

int main() {
    int rows = 4; // Number of rows for the pyramid

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print spaces for the first pyramid to shift it to the right
        for (int j = 1; j <= rows - i; j++) {
            printf(" ");
        }

        // Print the stars for the first pyramid
        for (int k = 1; k <= i; k++) {
            printf("#");
        }

        // Print the spaces in between the two pyramids
        printf("  ");

        // Print the stars for the second pyramid
        for (int k = 1; k <= i; k++) {
            printf("#");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

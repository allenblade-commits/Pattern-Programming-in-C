#include <stdio.h> // Include standard input-output library

int main() {
    int rows = 5; // Total number of rows for the pyramid

    // Outer loop: controls the number of rows
    for (int i = 0; i < rows; i++) {

        // First inner loop: prints spaces to center-align the stars
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // Second inner loop: prints (2*i + 1) stars, with a space after each
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("* ");
        }

        // Move to the next line after completing each row
        printf("\n");
    }

    return 0; // End of the program
}

#include <stdio.h> // Include standard input-output library

int main() {
    int rows = 5; // Total number of rows in the pyramid

    // Outer loop: controls each row
    for (int i = 0; i < rows; i++) {

        // First inner loop: prints spaces for center alignment
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // Second inner loop: prints numbers starting from 1
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%d ", k + 1);
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0; // End of program
}

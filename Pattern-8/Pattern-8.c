#include <stdio.h> // Include standard input-output library

int main() {
    int rows = 5; // Total number of rows in the pyramid

    // Outer loop: controls the number of rows (from 0 to 4)
    for (int i = 0; i < rows; i++) {

        // Inner loop: prints numbers from 1 to i+1 for each row
        for (int j = 0; j <= i; j++) {
            printf("%d ", j + 1); // Print the number (j + 1)
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0; // Exit the program
}

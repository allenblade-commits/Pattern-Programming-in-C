#include <stdio.h> // Include standard input-output header

int main() {
    int rows = 5; // Total number of rows in the pyramid

    // Outer loop: controls the number of rows
    for (int i = 0; i < rows; i++) {

        // First inner loop: prints spaces for center alignment
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            printf(" ");
        }

        // Second inner loop: prints increasing alphabets
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%c ", 'A' + k); // Print character starting from 'A'
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0; // Exit the program
}

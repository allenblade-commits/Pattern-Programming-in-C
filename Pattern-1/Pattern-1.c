#include <stdio.h> // Include standard I/O library

int main() {
    int rows = 5; // Total number of rows for the pattern

    // Outer loop: controls the number of rows (1 to 5)
    for (int i = 1; i <= rows; i++) {
        // Inner loop: prints '*' i times in each row
        for (int j = 1; j <= i; j++) {
            printf("* "); // Print star followed by a space
        }
        printf("\n"); // Move to the next line after each row is printed
    }

    return 0; // Exit the program
}

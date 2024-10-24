#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic without using a temporary variable
    a = a + b;  // Step 1: Add a and b, and store in a
    b = a - b;  // Step 2: Subtract b from the new value of a, and store in b
    a = a - b;  // Step 3: Subtract the new value of b from the new value of a, and store in a

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

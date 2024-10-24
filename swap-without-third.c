#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using arithmetic operations
    a = a + b; // Step 1: a becomes the sum of a and b
    b = a - b; // Step 2: b becomes the original value of a
    a = a - b; // Step 3: a becomes the original value of b

    // Output the swapped values
    printf("After swapping: \na = %d\nb = %d\n", a, b);

    return 0;
}

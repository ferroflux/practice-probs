#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a temporary variable
    temp = a; // Step 1: Store the value of a in temp
    a = b;    // Step 2: Assign the value of b to a
    b = temp; // Step 3: Assign the value of temp (original a) to b

    // Output the swapped values
    printf("After swapping: \n a = %d \n b = %d \n", a, b);

    return 0;
}

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Logic to find the sum of digits
    while (num != 0) {
        sum += num % 10;  // Add the last digit to the sum
        num = num / 10;   // Remove the last digit
    }

    // Output the sum of the digits
    printf("Sum of the digits: %d\n", sum);

    return 0;
}

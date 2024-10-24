#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Store the original number
    originalNum = num;

    // Logic to reverse the number
    while (num != 0) {
        remainder = num % 10;                // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num = num / 10;                      // Remove the last digit
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime numbers are greater than 1
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If divisible, not a prime
                break;
            }
        }
    }

    // Output whether the number is prime or not
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

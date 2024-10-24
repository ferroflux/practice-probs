#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a = 12;
    int b = 28;
    int result;

    result = a + b;
    printf("Sum: %d \n", result);

    result = a * b;
    printf("Product: %d \n", result);

    result = b / a;
    printf("Quotient: %d \n", result);

    result = b % a;
    printf("Remainder: %d \n", result);

    return 0;
}

#include <stdio.h>

int main() {
    int arr[] = {57, 82, 33, 10, 24}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int i;
    float sum = 0.0, average;

    
    for (i = 0; i < n; i++) {
        sum += arr[i];  
    }

    
    average = sum / n;

    
    printf("The array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe average of the array elements is: %.2f\n", average);

    return 0;
}

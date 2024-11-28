#include<stdio.h>

int main(){
    int intpt, i;
    int num[6] = {10, 20, 30, 40, 50, 60};

    printf("Enter a number: ");
    scanf("%d", &intpt);

    for(i = 0; i < 6; i++) {
        if (intpt == num[i]) {
            printf("The number is available in the array");
            return 0;
        }
    }

    printf("The number is not available in the array");
    return 0;
}

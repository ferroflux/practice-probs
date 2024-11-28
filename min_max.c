
#include <stdio.h>
int main() {
    int min, max, i;
    int num[8] = {12, 76, 23, 29, 59, 34, 48, 50};

    min = num[0];
    max = num[0];

    for (i = 1; i < 8; i++) {  
        if (num[i] > max) {
            max = num[i];
        }
        if (num[i] < min) {
            min = num[i];
        }
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

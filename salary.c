#include<stdio.h>
int main(){
    float basic, hra, da, gs;
    printf("Enter basic salary: \n");
    scanf("%f", &basic);

    hra = 0.2 * basic;
    printf("The H.R.A is: %f \n", hra);

    da = 1.5 * basic;
    printf("The D.A is: %f \n", da);

    gs = basic + hra + da;
    printf("The gross salary is: %f \n", gs);

    return 0;
}
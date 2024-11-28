
#include<stdio.h>
#include<math.h>
int main() {
    float mass, velocity, momentum, energy, c;
    printf("Enter mass of the object in kilogram: ");
    scanf("%f", &mass);

    printf("Enter velocity of the object in meters: ");
    scanf("%f", &velocity);

    momentum = mass * velocity;
    printf("The momentum of the object is: %f \n", momentum);


    c= 3 * pow(10, 8);
    energy = mass * c * c;
    printf("The energy is: %f \n", energy);

    return 0;

}
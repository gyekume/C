#include <stdio.h>

#define PI 3.14; // using define keyword don't forget the radder

int main(){
    //constant are variables with values that are constant that will not change we can define them in two ways for example 
    // pi is a  constant , gravity so you have to declare them in their way you can use define keyword and const and it is better
    //to define them before int main to be used every where.

    //constants should be written in capital letters

    //using them [constants]
    float diameter;
    printf("Enter the diameter of your circle  in metres : ");
    scanf("%f",&diameter);
    float circumfrence  = diameter * PI;
    printf("The circumfrence of your circle is %f m \n",circumfrence);




    const  float GRAVITY = 9.8;
    float mass;
    printf("Enter the mass in kg  of your body we find it's force : ");
    scanf("%f",&mass);
    float force = mass * GRAVITY;

    printf("the force is %f",force);

    
    return 0;   
    
}
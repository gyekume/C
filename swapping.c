#include <stdio.h>
int main(){
    int num1 , num2 , temp;
    //swapping is interchanging the numbers like value of num1 go to num2 and value of num2 go to num1 , temp is a temporaly variable we will be using

    num1 = 10;
    num2 = 20;
    printf("The value of num1 = %d and the value of num2 = %d \n ",num1,num2);

    temp = num1 ; //temp takes value of num1
    num1 = num2;  // num1 then takes value of num2
    num2 = temp; // then num2 takes the value of num1 we temporalily stored in temp variable

    printf("After swapping num1 is %d  and num2 is %d \n",num1,num2);
    return 0;
}
#include <stdio.h>  //bringing a library to use printf , scanf
int main(){
    int num1 , num2 , sum; //declaring int variables we will use
   
    printf("Enter first number : ");  //asking user to input first number
    scanf("%d",&num1); // scanning the first number if it is an integer and add it as value to variable num1 

    // %d is called a format specifier it specifies if the input is integer and add it there

    printf("Enter second number  : "); //asking and adding value to variable num2 
    scanf("%d",&num2);

    sum = num1 + num2;   //assigning the value of sum to that variable
    printf("%d + %d =  %d",num1,num2,sum);   //printin the output

    return 0; //returning 0 as the process is successful
}
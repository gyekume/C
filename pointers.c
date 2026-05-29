#include <stdio.h>
int main(){
    int number = 45;
    int *p = &number; //this is how we declare a pointer that points to an address of a valiable that stores a value
    printf("%d \n",number);
    printf("%d \n",p); // printing an address in decimal number using integer 

    // printing and address using a p format specifier in c which use hexadecimal to represent storage address

    printf("%p",p);

    printf("%d \n",*p);  //showing how you can access the value using the pointer that points to an address

    *p  =  30;
    printf("%d",number); // this shows that we have changed the value of the number using the pointer that links to an address we are
    return 0;
}
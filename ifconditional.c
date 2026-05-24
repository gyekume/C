#include <stdio.h>
int main(){
    int age;
    printf("What is your age : ");
    scanf("%d",&age);

    if (age < 18)
    {
    printf("You are young to play betting");
    }
    else{
        printf("You are aged to play ");
    }
    
}
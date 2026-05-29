#include <stdio.h>
int main(){
    //strings are like words it means they are collection of characters can be used to store things like names
    //we declare the same way we declare characters but there we use double quotes if you declare a character with double quotes it will take it as  a string 


    //declaring a strings

    char string1[5]= "true";
    char string2[] = "programming";
    char string3[] = {'S','t','r','i','n','g','s','\0'}; 

    // on sting 3 use the last character \0 it helps c to know the end of a string 
    /*that is why on string one we have 4 characters but storage if we wanted to specify we used 5 that to mark the end of string
    
    string 2 is the good way we don't specify the size c does it self 
    
    string 3 is also another way to declare c strings */


    //printing strings we use a format specifier for strings which are %s recall for characters we use %c

    printf("string1 :  %s \n string2 : %s \n string3 : %s \n\n\n",string1,string2,string3);

    //ADDITION REAL LIFE EXAMPLE 


    char name[50];
    char grade;

    printf("What is your name: ");
    scanf("%49s", name);

    printf("What is your grade: ");
    scanf(" %c", &grade); // the space before that that format specifier is important is to prevent like when user press enter it will be take as a character of new line or space 
    // and you have to always press enter after entering name so do it that way space is important

    printf("Information recorded: %s\tYou've got the grade of %c\n",
           name, grade);



}
#include <stdio.h>
#include <string.h> // we will use it to copy string into array because arrays are not assignable

// This is the way we define we make a structure  
struct Student{

    char name[30];
    int age;
};
int main(){
    struct Student s1;
    
    /* copy string into the array (arrays are not assignable) */
    strcpy(s1.name, "gyekume");
    s1.age = 10;
    printf("name: %s, age: %d\n", s1.name, s1.age);

    return 0;

}
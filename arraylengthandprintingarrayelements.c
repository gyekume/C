#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d \n",sizeof(arr)/sizeof(arr[0])); // this is how we can find the length of an array in C
   
    /* why this way is because sizeof turn the memory size of the variable size of array turned 20 bytes as one int is 4 bytes then 
     we divide it by the size of one element in the array which is 4 bytes then we get the length of the array which is 5*/
     printf("the length of the array is: %d \n",sizeof(arr)/sizeof(arr[0]));

    //now we are also going to see how to print the members of an array using a loop
    printf("the members of the array are: \n");
    for (int i = 0; i< 5; i++)   //the array as you saw first element is at index 0 so five members of array the index to use are 0 1 2 3 and  4 only 
    {
        printf("%d \t", arr[i]);   // \t is for tab space to make the output look better and more organized
    }
     return 0;
    
}
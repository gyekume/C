#include <stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    printf("%d",sizeof(arr)/sizeof(arr[0])); // this is how we can find the length of an array in C
    return 0;
    // why this way is because sizeof turn the memory size of the variable size of array turned 20 bytes as one int is 4 bytes then 
    // we divide it by the size of one element in the array which is 4 bytes then we get the length of the array which is 5
}
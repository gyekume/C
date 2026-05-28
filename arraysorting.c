#include <stdio.h>
int main(){
    int arr [] = {20,45,12,34,19,3,90,54}; // this is the array we want to arrange


    /*the idea first we are going to loop through the array we will start at number 20 at index 0 we compare it to the next number
    if we find 20 bigger we will swap to know the idea of swapping you can find it in another file so mean we interchange them so 
    like 20 is not greater than 45 we will not interchange we will go to next number at index 1 which is 45 we compare to the 
    next number till over so for the first looping an array or to pass through it it will end only if the biggest number is at the
    end so we will need to loop againg also the second largest number will then come before the last  like loop 1 
     20 ,12 , 34, 19 , 3, 45, 54 , 90  it will look like that on first loop then on the second loop 12, 20 , 19, 3, 34, 45, 54 , 90
     like that so to know the times we need to loop as you see one loop is equal to the length of array as each loop is used to just do 
     for one number so let's go in codes*/

    int n = sizeof(arr)/sizeof(arr[0]); // length of array 
    int temp;
    
    for(int p= 1; p<n;p++){
    for(int i = 0; i < n-p; i++){
        if(arr[i]>arr[i+1]){
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] =temp;
        }
    }
    }
    for(int j=0 ;j<n;j++){
        printf("%d \t",arr[j]);
    }

}
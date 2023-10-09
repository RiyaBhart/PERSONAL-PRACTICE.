Search for an Element in an Array:
Write a C program to read 'n' numbers into an array and then ask the user to enter a value to search for in the array. Display whether the value is found or not.
#include <stdio.h>

int main() {
  int n;
  int j;
  int i;
  int count=0;
  printf("input n:  ");
  scanf("%d",&n);
 
  int arr[n];
  for(int i=0;i<n;i++){
      printf("input data in array:  ");
      scanf("%d",&arr[i]);
  }
  printf("enter the value to find in an array:  ");
  scanf("%d",&j);
  for(i=0;i<n ;i++){
       if (arr[i]==j){
           printf("The value exsists in array.");
           break;
       }
       else{
            printf("the value doesn't exist in array.\n");
       }
}
    return 0;
}

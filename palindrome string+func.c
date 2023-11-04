// palindrome using strings
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void stringrev(char *str){
    int length= strlen(str);
    int limit = length/2;
    int start = 0;
    int end = length -1;

    while(start<end){
       char temp=str[start];
        str[start]= str[end];
        str[end] = temp;
        start++;
        end--;
    }
    printf("%s\n",str);
}
bool stringpalin(char *str){
    int length= strlen(str);
    int limit = length/2;
    int start = 0;
    int end = length -1;

    while(start<end){
       if(str[start]!=str[end]){
           return false;
       }
        start++;
         end--;
    }
         return true;
}
int main(){
    char str[1000];
    char temp;
    printf("Enter text1: ");
    gets(str);
    stringrev(str);
    stringpalin(str);
    if(stringpalin(str)){
        printf("palindrome");
    }
    else{
        printf("not a palindrome");
    }
        
    
    return 1;
}

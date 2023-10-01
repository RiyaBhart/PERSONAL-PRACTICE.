#include <stdio.h>
int factorial(int n);
int main(){
    printf("The answer is:    %d",factorial(3));
}
int factorial(int n){
    if (n==1){
        return 1;
    }
    int factorialn1=factorial(n-1);
    int factorialn=factorial(n-1)*n;
    return factorialn;
}

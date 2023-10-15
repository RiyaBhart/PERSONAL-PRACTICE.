/*Write a program in C to display the n terms of a harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334



*/
#include <stdio.h>

int main() {
    int n;
    float i;
    float sum=0,num,j;
    printf("Enter number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        j=1/i;
        printf("%.2f\n",j);
        sum = sum+j;
    }
    printf("sum is %f",sum);
    return 0;
}

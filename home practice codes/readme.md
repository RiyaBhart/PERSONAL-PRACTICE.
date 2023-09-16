CODE TO REVERSE A TWO DIGIT INTEGER

#include <stdio.h>

int main() {
    int r;
    int n;
    int rev;
    int r1;
    int a;
   
   printf(" Input two digit integer:  ");
   scanf("%d", &n);
   
   r=n;
   r1 = n%10;
   n= n/10;
   a = r1* 10;
   rev = a+n ;
   printf(" the answer is:  %d",rev);
   
   

    return 0;
}

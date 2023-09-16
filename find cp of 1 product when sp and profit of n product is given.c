#include <stdio.h>
#include <math.h>

int main() {
    int pf;
    int cp;
    int sp;
    int a;
    int n;
    
    printf("Enter number of products:  ");
    scanf("%d", &n);
    printf("Enter selling price of products:  ");
    scanf("%d", &sp);
    printf("Enter profit of products:  ");
    scanf("%d", &pf);
    cp = sp-pf;
    a= cp/n;
    printf("Cost price of one item:  %d",a);
    

    return 0;
}

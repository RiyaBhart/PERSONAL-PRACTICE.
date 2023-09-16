#include <stdio.h>
#include <math.h>

int main() {
    int m;
    int v;
    int KE;
    int a;
    
    
    printf("Enter mass of the body:  ");
    scanf("%d", &m);
    printf("Enter velocity of the body:  ");
    scanf("%d", &v);
    a = v*v;
    KE = 0.5*m*a;
    printf("Kinetic energy of the body is:  %d",KE);
    

    return 0;
}

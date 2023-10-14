#include <stdio.h>
#include <math.h>

int main() {
    float x1,x2,y1,y2;
    printf("Enter the value of x coordinate of first point: ");
    scanf("%f",&x1);
    printf("Enter the value of x coordinate of second point: ");
    scanf("%f",&x2);
    printf("Enter the value of y coordinate of first point: ");
    scanf("%f",&y1);
    printf("Enter the value of y coordinate of second point: ");
    scanf("%f",&y2);
    float answer;
    answer=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
    printf("Answer is %.2f",answer);
    

    return 0;
}

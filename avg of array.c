#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("Enter size of arrayy:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Input values in array: ");
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("the total sum is: %d\n",sum);
    int avg=sum/n;
    printf("Average is: %d",avg);
    
    return 0;
}

#include <stdio.h>
int main(){
    int n,i,j,temp,k;
    printf("input size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("values of array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<n;i++){
        if(max<arr[i])
        max=arr[i];
    }
    printf("max value is : %d",max);
    
    
    return 0;
}

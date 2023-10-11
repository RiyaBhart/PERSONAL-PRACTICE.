#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("Enter size of arrayy:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Input values in array: ");
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    for(i=0;i<n;i++){
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>min){
                max=arr[i];
            }
    }
    printf("min value %d\n",min);
    printf("max value %d\n",max);
    return 0;
}

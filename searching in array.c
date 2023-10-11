/*Search in Array: Write a program to search
*for a specific element in an array 
*and return its index if it exists.
*/
{
    int n,i,j;
    printf("Enter size of arrayy:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Input values in array: ");
        scanf("%d",&arr[i]);
    }
    printf("Enter element of array to find:");
    scanf("%d",&j);
    for(i=0;i<n;i++){
        if(arr[i]==j){
            printf("Found at %d index and %d position",i,i+1);
        }
        else{
            continue;
        }
    }
    return 0;
}

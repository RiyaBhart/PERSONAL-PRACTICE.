int main() {
  int n;
  int j;
  int i;
  int count=0;
  printf("input n:  ");
  scanf("%d",&n);
 
  int arr[n];
  for(int i=0;i<n;i++){
      printf("input data in array:  ");
      scanf("%d",&arr[i]);
  }
  printf("enter the value to find in an array:  ");
  scanf("%d",&j);
  for(i=0;i<n ;i++){
       if (arr[i]==j){
           count=1;
           break;
       }
}
        if (count){
          printf("the number exists.");
      }
        else{
          printf("the value doesn't exist in array.");
      }
    return 0;
}

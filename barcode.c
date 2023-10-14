/*Task 1:
[20 mins, 10 points]
Barcodes are the mark which identify a product as unique. The barcode is 5 digits long. A company was mixed up stock which is required to be sorted out into 3 categories:
• Category 1 - If the first 2 digits are both divisible by 2 or 4.
• Category 2 - If not category 1, and the last digit is divisible by 3 and the 2nd last digit is odd.
• Category 3 - If it doesn't meet the above conditions.
Write a C program which will read the barcode and print on the screen the appropriate category.
Example Input:
Barcode: 46751
Example Output:
Category 1
*/
#include <stdio.h>
int main(){
    int n,p,r,q;
    printf("Enter barcode: ");
    scanf("%d",&n);
    r=n/1000;
    p=r%10;
    q=r/10;
    if(q%2==0 && p%2==0){
        printf("Category 1");
    }
    else{
        r=n%100;
        p=r%10;
        q=r/10;
        if(q%3==0 && p%2!=0){
            printf("Category 2");
        }
        else{
         printf("Category 3");   
        }
        }
    
    return 0;
}

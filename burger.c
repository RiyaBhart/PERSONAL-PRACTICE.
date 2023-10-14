#include <stdio.h>

int main() {
    int nt,ncs;
    int jumbo=0, small=0;
    printf("Enter number of tomato slices and cheese slices: ");
    scanf("%d%d",&nt,&ncs);
    for(;nt>=4&&ncs>=1;nt-=4,ncs-=1){
        jumbo++;
    }
    for(;nt>=2&&ncs>=1;nt-=4,ncs-=1){
        small++;
    }
    if(nt==0&&ncs==0){
        printf("No Ingredients wasted\n");
        printf("%d Jumbo burgers were made\n",jumbo);
        printf("%d small burgers were made\n",small);
    }
    else
    printf("Not possible");
    

    return 0;
}

#include <stdio.h>

int firstline(int n){
for(int i=0;i<=6;i++){
    if(i%2!=0){
        continue;
    }
    printf("%d\n",i);
    printf("\n");
}
    
    return 1;
}
int secondline(int n){

for(int i=0;i<=6;i++){
    printf("\t");
    printf("%d\n",i);
}
}
int thirdline(int n){
for(int i=0;i<=6;i++){
    if(i%2!=0){
        continue;
    }
    printf("\t\t");
    printf("%d\n",i);
    printf("\n");
}
    
    return 1;
}
int fourthline(int n){

for(int i=0;i<=6;i++){
    printf("\t\t\t");
    printf("%d\n",i);
}
}
int main() {
    firstline(1);
    secondline(1);
    thirdline(1);
    fourthline(1);
    return 1;
}
OUTPUT 


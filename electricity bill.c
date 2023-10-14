#include <stdio.h>
int main(){
    
    int ID,unit,charges,chargesnew,surcharge;
    
    printf("Enter id: ");
    scanf("%d",&ID);
    printf("Enter unit consumed: ");
    scanf("%d",&unit);
    if(unit<200){
        charges=unit*1.20;
    }
    if(unit>199&&unit<400){
        charges = unit*1.50;
    }
    if(unit>399&&unit<600){
        charges = unit*1.80;
    }
    if(unit>599){
        charges = unit*2.00;
    }
    if(charges>400){
        chargesnew=charges+(charges*0.15);
    }
   
    printf("Customer ID customer:  %d\n",ID);
    printf("Unit consumed:  %d\n",unit);
    printf("Amount : %d\n",charges);
    if(charges>400){
    surcharge = charges*0.15;
    printf("Surcharge amount: %d\n",surcharge);
    printf("Amount after surcharge amount:  %d\n",chargesnew);
    }
    
    return 0;
}

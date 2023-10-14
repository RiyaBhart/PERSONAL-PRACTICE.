/*A company provides salary to its employees based on the hours they have worked. Then, it decides to give bonuses to all its employees on Eid. A 5% bonus on salary is given to the male workers and a 10% bonus on salary to the female workers.
Write a program which takes as input the hours worked and hourly rate to first calculate the salary of the employee. Then, take as input the gender (M for male and F for female) of the employee. If the salary of the employee is less than Rs. 10,000 then the employee gets an extra 2% bonus on salary. Finally, print on the screen the final salary after bonus



*/

#include <stdio.h>

int main() {
    int hw,hr,n=1,i,gender;
    float salary,bonus;
    
    printf("Hourly rate: ");
    scanf("%d",&hr);
        printf("No of hours worked:  ");
        scanf("%d",&hw);
        salary = hw * hr;
        printf("Enter 0 for female and 1 for male: ");
        scanf("%d",&gender);
        if(gender==1){
            bonus=salary*0.05;
            salary= salary+bonus;
            if(salary<=10000){
                bonus=salary*.02;
                salary=bonus+salary;
            }
            printf("Employee is Male\n");
        }
           else{
            bonus=salary*0.1;
            salary= salary+bonus;
            if(salary<=10000){
                bonus=salary*.02;
                salary=bonus+salary;
            }
             printf("Employee is Female\n");
           }
        printf("Salary : %f\n",salary);
        printf("Bonus:  %.2f\n",bonus);
    
    return 0;
}

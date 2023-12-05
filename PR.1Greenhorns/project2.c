#include <stdio.h>
int main(){
    float BaseSalary,HRA,DA,TA,grosssalary;
    
    
    printf("Enter the base salary:\n ");
    scanf("%f", &BaseSalary);
    printf("Enter the HRA percentage: \n");
    scanf("%f", &HRA);
    printf("Enter the DA percentage:\n");
    scanf("%f", &DA);
    printf("Enter the TA percentage:\n");
    scanf("%f", &TA);
    
    
    HRA = (BaseSalary * HRA) / 100;
    DA = (BaseSalary * DA) / 100;
    TA = (BaseSalary * TA) / 100;    
    
    grosssalary = BaseSalary + HRA + DA + TA;
    
    
    printf("Grosssalary of the employee is: %.2f",grosssalary);
    return 0;
}
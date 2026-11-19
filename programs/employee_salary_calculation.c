//program to calculate salary of employees 
#include <stdio.h>
int main(){
    int basic_pay,da,hra,gross,pro_tax,net_slry;
    printf("Employee salary calculation System");
    printf("\nEnter Basic pay: ");
    scanf("%d",&basic_pay);
    da = (20*basic_pay)/100;
    hra = (15*basic_pay)/100;
    gross = basic_pay + da + hra;
    pro_tax = (5*gross)/100;
    net_slry = gross - pro_tax;

    printf("\nThe Net salary is: %d",net_slry);
    printf("\nThe pay structure is shown below: ");
    printf("\nDA = %d\nHRA = %d\nGross Salary = %d\nProfessional Tax = %d",da,hra,gross,pro_tax);
return 0;
}
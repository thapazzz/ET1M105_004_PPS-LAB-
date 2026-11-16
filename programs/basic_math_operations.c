/* program to get input from the user and display sum,difference,product,quotient
of the given numbers */
#include <stdio.h>
int main(){
    int num1,num2;
    int sum,diff,prdt;
    float quot;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    
    printf("Enter the second number: ");
    scanf("%d",&num2);
    sum = num1+num2; //sum
    diff= num1 - num2; //difference
    prdt = num1 * num2;
    
    quot = (float)num1/num2;

    printf("The sum is: %d \nThe difference is: %d \nThe product is: %d \nThe quotient is: %f",sum,diff,prdt,quot);
return 0;
}

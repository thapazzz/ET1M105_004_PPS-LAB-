#include <stdio.h>
int main(){
    int num;
    printf("\nProgram to find whether the given number is odd or even");
    printf("\nPlease enter a number: ");
    scanf("%d", &num);
    if (num%2 == 0){
        printf("%d is an even number.",num);
    }
    if (num%2==1){
        printf("%d is an odd number.",num);
    }
    if (num==0){
        printf("%d is neither even or odd.",num);
    }
return 0;
}
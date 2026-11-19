#include <stdio.h>
int main(){
    int roll;
    float eng,math,science,hindi,avg,percent,sum;
    char name[100];
    printf("Student Result and Percentage Calculation System");
    printf("\nEnter student name: ");
    fgets(name,sizeof(name),stdin);
    printf("\nEnter roll number of student :");
    scanf("%d",&roll);
    printf("\nEnter the obtained marks in each subject\n");
    printf("\nEnglish: ");
    scanf("%f",&eng);
    printf("\nMaths: ");
    scanf("%f",&math);
    printf("\nHindi: ");
    scanf("%f",&hindi);
    printf("\nScience: ");
    scanf("%f",&science);

    sum = eng + hindi + math + science;
    avg = sum/4;
    percent = (sum/400)*100;
    printf("\nTotal marks obtained by %c is: %0.2f")
}
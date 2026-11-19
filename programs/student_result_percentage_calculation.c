#include <stdio.h>
int main(){
    int roll;
    float eng,math,science,hindi,avg,percent,sum,fail;
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
    fail = 0;
    sum = eng + hindi + math + science;
    avg = sum/4;
    percent = (sum/400)*100;

    printf("\nTotal marks obtained by %c is: %0.2f",name,sum);
    printf("\nThe average marks obtained is: %0.2f",avg);
    printf("\nPercentage obtained by student is: %0.2f\n",percent);
        if (eng<40){
        fail +=1;
        printf("\nStudent has failed in english");
    }
    if (math<40){
        fail +=1;
        printf("\nStudent has failed in maths");
    }
    if (hindi<40){
        fail +=1;
        printf("\nStudent has failed in HIndi");
    }
    if (science<40){
        fail +=1;
        printf("\nStudent has failed in science");
    }
    if (fail != 0)
    {
        /* code */
        printf("\nThe student has failed in one of the subjects metioned above");
        printf("\nResult: Fail");
    }
    if (fail==0)
    {
        printf("\nThe student has passed in all of the subjects.");
        printf("\nResult: Pass");
    }
    
    
return 0;
}
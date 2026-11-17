//calculating perimeter and area of a rectangle 
#include <stdio.h>
int main(){
    float length,breadth,perimeter,area;
    printf("\nProgram to find area and perimeter of a rectangle\n");
    printf("\nEnter the length of the rectangle: ");
    scanf("%f",&length); 
    printf("Enter the breadth of the rectangle: ");
    scanf("%f",&breadth);
    perimeter = 2*(length + breadth);
    area = length * breadth;

    printf("\nThe area is: %.2f \nThe perimeter is: %.2f",area, perimeter);
    return 0;

}
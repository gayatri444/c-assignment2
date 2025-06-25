// Accept radius of a circle and print the area and circumference of circle.
#include<stdio.h>
int main()
{
    float radius, area, cference;
    //area of circle 
    printf("Enter Radius of circle :");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("\n Area of circle =%2f",area);
    //circumference of circle
    cference = 2 * 3.14 * radius;
    printf("\n Area of circumference =%2f",cference);
    return 0;
    
}
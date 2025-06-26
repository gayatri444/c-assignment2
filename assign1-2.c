//Accept dimensions of a cylinder and print the surface area and volume
#include<stdio.h>
int main()
{
    float surfacearea,volume,radius,height;
    printf("Enter dimensions : radius &height of cylinder :");
    scanf("%f%f",&radius , &height);
    surfacearea = 2 *3.14 * radius * radius + 2 * 3.14 * radius * height;
    printf("\n surface area is :%.2f",surfacearea);
    volume = 3.14 * radius * radius *  height;
    printf("\n volume is :%.2f", volume);
    return 0;
}
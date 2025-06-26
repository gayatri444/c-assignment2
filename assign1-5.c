//Accept two numbers and print arithmetic and harmonic mean of the two numbers.
#include<stdio.h>
int main()
{
    int a, b , am, hm;
    printf("Enter two Numbers:");
    scanf("%d%d",&a,&b);
    //arithmetic mean am=(a+b)/2
    am=(a+b)/2;
    //harmonic mean hm=ab/(a+b)
    hm=a*b/(a+b);
    printf("\n Arithmatic mean is : %d", am);
    printf("\n Harmonic mean is  :%d", hm);
    return 0;

}
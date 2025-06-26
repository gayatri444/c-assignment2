//Accept temperatures in Fahrenheit(F) and print it in Celsius(C) and Kelvin (K).
#include<stdio.h>
int main()
{
    float fahrenheit, celcius,kelvin;
    printf("enter temperature in fahrenheit only :");
    scanf("%f",fahrenheit);
    celcius = (fahrenheit -32) * 5/9;
    //k = c +273.15
    kelvin = celcius + 273.15;
    printf("\n fahrenheit to celcius :%f",celcius);
    printf("\n fahrenheit to kelvin :%f",kelvin);
    return 0;
            
}
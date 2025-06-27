//Accept two integers from the user and interchange them. Display the interchanged numbers. Using temporary variable Without using temporary variable
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter Two Numbers :");
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("\nAfter Swapping : a=%d,b=%d",a,b);
    //using + and - operator 
    a = a + b;
    b  = a - b;
    a = a - b;
    
    printf("\n After Swapping + operator :a=%d,b=%d",a,b);
    // using / * operator 
    a = a*b;
    b = a/b;
    a = a/b;
     printf("\n After Swapping + operator :a=%d,b=%d",a,b);
     return 0;
     
}
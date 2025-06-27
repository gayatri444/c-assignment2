//Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and print surface area and volume.
#include<stdio.h>
int main()
{
    float 1, b, h, sa, v;
    printf("Enter three dimension length (1),breadth(b)and height(h) of of a cuboid :");
    scanf("%f%f%f",&1, &b ,&h);
    //surface area = 2 (1b +1h+bh)
    sa = 2 * (1 * b + 1 * h + b * h);
    //volume = 1bh
    v = 1 * b * h;
    printf("\n surface are :%f",sa);
printf("\n volume is :%f",v);
return 0;

}
//.Consider a room having one door and two windows both of the same size. Accept dimensions of the room, door and window. Print the area to be painted (interior walls) and area to be whitewashed (roof)
#include<stdio.h>
int main()
{
    float l,b,h;
    float  doorw, doorh,winw,winh;
    float walla,doora,windowa,painta,roofa;
    //taking dimension inputs
    printf("Enter room length , breadth,&height :");
    scanf("%f%f%f",&l,&b,&h);
    printf("Enter Door Width & Height :");
    scanf("%f%f",&doorw,&doorh);
    printf("Enter window width & height");
    scanf("%f%f", &winw, &winh);

    walla = 2 *(1+b)*h;
    doora = doorw *doorh;

windowa = 2*(winw*winh);
painta = walla - doora - windowa;
roofa = 1*b;
printf("n area to be painted(walla)=%.2f sq unit",painta);
printf("n area to be painted(roof)=%.2f sq unit",roofa);
return 0 ;
}














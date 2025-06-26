// Accept initial velocity (u), acceleration (a) and time (t). Print the final velocity (v) and the distance (s) travelled.
#include<stdio.h>
int main()
{
    float velocity,distance,acceleration,time;
    printf("enter velocity, acceleration,,time:");
    scanf("%f%f%f",&velocity,&acceleration,&time);
    //v=u+at
    velocity=acceleration +time;
    //s=u+a*t*t
    distance = velocity +acceleration * time *time;
    printf("\n velocity is :%f",velocity);
    printf("\n distance is :%f",distance);
    return 0;
    
}












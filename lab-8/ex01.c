#include<stdio.h>
#define pi 3.14
float CircleArea(int);
float Circumference(int);
int main()
{
    int radius ;
    printf("Enter the radius in cm : ");
    scanf("%d",&radius);
    printf("Circumference : %.2f\n",Circumference(radius));
    printf("Area : %.2f\n",CircleArea(radius));
    return 0;
}
float Circumference(int rad)
{
    float circum;
    circum = 2*pi*rad;
    return circum;
}
float CircleArea(int rad)
{
    float Area;
    Area = pi*rad*rad;
    return Area;
}
#include<stdio.h>
int main()
{
    float x = 2.50;
    float y = 3.24;
    float *pt1 = &x;
    float *pt2 = &y;

    printf(" Before swap : x=%f y=%f",x,y);

    float temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;

    printf(" \nAfter swap : x=%f y=%f\n",x,y);

    return 0;
    
}
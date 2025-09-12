#include<stdio.h>
int main()

{

    int a = 0;
    int b = 5;
    int *pt1 = &a;
    int *pt2 = &b

    printf(" Before reverse : a=%d b=%d",a,b);

    int temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;

    printf(" \nAfter reverse : a=%d b=%d\n",a,b);

    return 0;
    
}
#include<stdio.h>
int sum_squares(int a,int b)
{
    return (a*a) + (b*b);
}

int main()
{
    int a,b;

    printf("Enter the two integers : ");
    scanf("%d %d",&a,&b);
    int sum;
    sum = sum_squares(a,b);
    printf("Sum of squares of %d and %d is %d ",a,b,sum);

    return 0;
}


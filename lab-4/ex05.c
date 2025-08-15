#include<stdio.h>
int main()
{
    int num;
    int i;
    int sum = 1;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1 ;i<=5 ; i++)
    {
        sum *= i;
    }
    printf("Factorial of %d is %d\n",num,sum);

    return 0;
}

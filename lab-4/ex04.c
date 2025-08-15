#include<stdio.h>
int main()
{

    int num;
    int i;
    printf("Enter a number :");
    scanf("%d",&num);
    printf("Multiplication Table for %d :\n",num);
    for(i=1 ; i<=12 ; i++)
    {
        printf("%4d * %-2d = %-3d\n",num,i,num*i);
    }

    return 0;
}
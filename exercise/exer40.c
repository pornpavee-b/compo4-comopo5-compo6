#include<stdio.h>
int main()
{

    int i;
    int num;
    printf("Multiplication table :");
    scanf("%d",&num);
    for(i=0;i<13;i++)
    {
       printf("%4d * %-2d = %3d\n",num,i,num*i);
    }
    
    return 0;
}
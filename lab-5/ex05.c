#include<stdio.h>
int main()
{
    int i=0;
    int num[8];
    int max=0;
    int min;
    for(int i=0;i<8;i++)
    {
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);
    }
    min=num[0];
    for(int i=0;i<8;i++)
    {
        if(num[i]<min)
        { 
            min=num[i];
        }
        else(num[i]>max);
        {
           max=num[i];
        }

    }
    printf("Smallest number : %d\n",min);
    printf("Largest number : %d\n",max);
    return 0;
}
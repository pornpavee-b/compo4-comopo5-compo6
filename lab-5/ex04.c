#include<stdio.h>
int main()
{
    int i=0;
    int values[10];
    int even=0;
    int odd=0;
    for(int i=0;i<10;i++)
    {
        printf("Enter value %d : ",i+1);
        scanf("%d",&values[i]);
        if(values[i]%2==0)
            even++;
        else
            odd++;  
    }
    printf("Even number : %d\n",even);
    printf("Odd number : %d\n",odd);
    return 0;
}
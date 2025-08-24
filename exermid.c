#include<stdio.h>
int main()
{
    int i=0;
    int num;
    int binary[19];
    printf("Decimal : ");
    scanf("%d",&num);
    int temp=num;
    if(temp==0)
    {
        printf("Binary : 0");
    }
    else
    {
        while(temp>0)
        {
            binary[i]=temp%2;
            temp=temp/2;
            i++;
        }
        printf("Binary      : ");
        for(int j = i - 1; j >= 0; j--) 
        {
            printf("%d", binary[j]);
        }
    }
    printf("\nHexadecimal : %x\n", num);
    return 0;
}
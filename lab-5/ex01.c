#include<stdio.h>
int main()
{
   int i=0;
   int values[10];
   for(int i=0 ; i<10 ; i++)
   {
    printf("Enter the value %d here :",i+1);
    scanf("%d",&values[i]);
   }
   printf("Value in array are :");
   for(int i=0;i<10;i++)
   {
   printf("%d ,",values[i]);
   }
   return 0;
}
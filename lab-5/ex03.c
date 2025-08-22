#include<stdio.h>
int main()
{
   int i=0;
   int marks[5];
   int total_marks;
   int max=0;
   for(int i=0 ; i<5; i++)
   {
    printf("Enter the marks of student %d :",i+1);
    scanf("%d",&marks[i]);
    total_marks += marks[i];

    if(marks[i]>max)
    {
        max=marks[i];
    }

   }
    printf("Total marks : %d\n ",total_marks);
    printf("Higest marks : %d\n",max);
   return 0;
}
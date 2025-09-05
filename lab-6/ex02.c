#include<stdio.h>
int main()
{
    int i;
    int max;
    struct student{
    char name[100];
    int age;
    float score;
    }s[3];

    for(i=0;i<3;i++)
    {
    printf(" Student[%d]'s name : ",i+1);
    scanf(" %[^\n]*c",s[i].name);
    printf(" Student[%d]'s age : ",i+1);
    scanf("%d",&s[i].age);
    printf("Student[%d]'s score : ",i+1);
    scanf("%f",&s[i].score);

    }
    
    max = 0;
    for(i=0;i<3;i++) 
    {
        if(s[i].score > s[max].score)
             max=i;
             
    }
      
       printf(" \nthe highest scores belong to %s at %.1f scores ",s[max].name,s[max].score);

       return 0;

    
    
}
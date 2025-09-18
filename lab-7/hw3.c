#include<stdio.h>
int main()
{

    struct S{
    int num1;
    int num2;
    int sum;
    };

    struct S s;
    struct S *ptr = &s;
    printf("Enter first number : ");
    scanf("%d",&ptr->num1);
    printf("Enter second number : ");
    scanf("%d",&ptr->num2);
    ptr->sum = ptr->num1 + ptr->num2;

    printf("First number : %d\n",ptr->num1);
    printf("Second number : %d\n ",ptr->num2);
    printf("Third number : %d \n",ptr->sum);

    return 0 ;

}
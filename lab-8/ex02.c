#include<stdio.h>
#include<stdbool.h>

bool isprime(int num)
{
    if (num <= 1) 
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++) 
    { 
        if (num % i == 0) 
        {
            return false; 
        }
    }
    return true;
}

int main()
{
    int a,b;
    printf("Enter the star and end numbers : ");
    scanf("%d %d",&a,&b);
    printf("The prime numbers within the intervals are : ");

    for(int i=a ; i<=b ;i++)
     {
        if (isprime(i)) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;

}
#include<stdio.h>
int main()
{
    int array[] = {3,1,2,4,5,6};
    int size = 6;
    int *p;
    int sum =0;
    
    for(p = array ;p < array + 6;p++)
    {
        sum += *p;
    }

    printf("The sum of array is : %d\n",sum);
    return 0;

}
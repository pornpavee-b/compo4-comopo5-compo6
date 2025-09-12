#include<stdio.h>
int main()
{

    int array[] = {3,1,2,4,5,6};
    int *p ;
    int *pt = array + 6;
    int max = *array;

    for(p = array + 1; p<pt ; p++)
    {
        if(*p > max)
        {
            max = *p;
        }
    }

    printf("Max value : %d\n",max);

    return 0;
}
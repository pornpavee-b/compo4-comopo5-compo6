#include<stdio.h>
int main()
{
    int size = 6;
    int array[]= {3,1,2,4,5,6};
    int *p = array;
    int *pt = array + 6;
    while(p < pt)
    {
        printf("%d\n",*p);
        p++;
    }
    return 0;
}
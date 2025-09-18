#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3];
    int *p = &arr[0][0];
    int num = 1;

    for(int i=0;i<9;i++)
    {
        *(p+i) = num++;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",*(p+i*3+j));
        }

        printf("\n");
    }

    return 0;
}
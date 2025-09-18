#include<stdio.h>
int main()
{
    int i ,j,temp;
    int a,b,c,d,e;
    int *p[5];

    printf("Enter 5 integers : ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    *(p+0) = &a;
    *(p+1) = &b;
    *(p+2) = &c;
    *(p+3) = &d;
    *(p+4) = &e;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(*(*(p+j)) > *(*(p+j+1)))
            {
                temp = *(*(p+j));
                *(*(p+j)) = *(*(p+j+1));
                *(*(p+j+1)) = temp;
            }
        }
    }

    printf("Sorted : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",*(*(p+i)));
    }

    printf("\n");
    
    return 0;
}
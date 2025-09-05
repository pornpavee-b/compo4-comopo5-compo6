#include<stdio.h>
int main()
{   
    int i;
    struct time{
    int min;
    int sec;
    }t[3];
 
    int totall=0;
    for(i=0;i<3;i++)
    {
    printf(" Time input (m:s) : ");
    scanf("%d : %d",&t[i].min,&t[i].sec);
    totall += t[i].min*60 + t[i].sec;
    }

    printf("Totall time elasped : %d second(s)",totall);
    return 0;

}
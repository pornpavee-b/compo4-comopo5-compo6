 #include<stdio.h>
int main()
{
    int i , sum = 0;
    int num[10];
    int everage;
    float average;
    // for(start; stop-condition; step)
    for(i = 0; i < 10; i++)
    {
        printf("Enter the number :");
        scanf("%d",&num[i]);
        sum += num[i];
    }
    average = sum/10.0;
    printf("total is %d\n ",sum);
    printf("average is %.2f\n ",average);
   
    return 0;
}
  #include<stdio.h>
int main()
{
    int i , sum = 0;
    int num[10];
    while(i>=0 && i<10)
    {
        printf("Enter the number :");
        scanf("%d",&num[i]);
        sum += num[i];
        i++;
    }
    printf("total sum is %d\n ",sum);
  
    return 0;
}
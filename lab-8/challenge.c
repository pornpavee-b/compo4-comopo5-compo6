#include<stdio.h>
float calcAverage(int grads[],int n);
void findMaxMin(int gareds[],int n,int *max,int *min);
void printPassed(char name[][30],int grades[],int n);

int main()
{
    int n;
    printf("Enter number of students : ");
    scanf("%d",&n);
    char name[n][30];
    int grades[n];
    
    for(int i =0;i<n;i++)
    {
        printf("Enter name of student %d :",i+1);
        scanf("%s",name[i]);
        printf("Enter grade of %s : ",name[i]);
        scanf("%d",&grades[i]);
    }
    float average = calcAverage(grades,n);
    printf("Average grade : %.2f\n",average);

    int max, min;
    findMaxMin(grades, n, &max, &min);
    printf("Highest grade : %d\n ",max);
    printf("Lowest grade : %d\n",min);
    printPassed(name, grades, n); 

    return 0;
}
 
float calcAverage(int grades[],int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += grades[i];
    }
    return (float)sum / n;  
}

void findMaxMin(int grades[], int n, int *max, int *min)
 {
    *max = grades[0];
    *min = grades[0];

    for (int i = 1; i < n; i++) 
    {
        if (grades[i] > *max) 
        {
            *max = grades[i];
        }
        if (grades[i] < *min) 
        {
            *min = grades[i];
        }
    }
}

void printPassed(char names[][30], int grades[], int n) 
{
    printf("Students who passed :\n");
    for (int i = 0; i < n; i++) 
    {
        if (grades[i] >= 60) 
        {
            printf("%s\n", names[i]);
        }
    }
} 
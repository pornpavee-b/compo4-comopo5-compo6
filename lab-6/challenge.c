#include <stdio.h>
int main() 
{
    int i;
    int j;
    int top_st = 0;         
    float top_avg = 0;      
    float sj_sum[4] = {0}; 
    char  *sj_names[4] = {"Math", "English", "Science", "History"};
    struct grade {
    int grade_st[4];   
    };
    struct students {
    char name[30];
    int ID;
    struct grade g;    
    }st[3];

    for (i=0; i<3;i++) 
    {
        printf("Enter name, ID and 4 grades of student [%d]:\n", i+1);
        scanf("%s %d",st[i].name,&st[i].ID);
        for (j=0;j<4;j++) 
        {
            scanf("%d", &st[i].g.grade_st[j]);
            sj_sum[j] += st[i].g.grade_st[j]; 
        }
    }
    printf("\nStudent Averages:\n");
    for (i=0;i<3;i++) 
    {
        int sum = 0;
        for (j=0;j<4;j++) 
        {
            sum += st[i].g.grade_st[j];
        }

        float average = sum/4.0;
        printf("%s (ID: %d) : %.2f\n",st[i].name,st[i].ID,average);

        if (average>top_avg) 
        {
            top_avg = average;
            top_st = i;
        }
    }

    printf("\nTop Student: %s with : %.2f\n",st[top_st].name,top_avg);
    printf("\nSubject Averages:\n");
    
    int top_subject = 0;
    for (j=0;j<4;j++) 
    {
        float avg = sj_sum[j] / 3.0;
        printf("%s: %.2f\n",sj_names[j],avg);
        
        if (avg > sj_sum[top_subject]/3.0) 
        {
            top_subject = j;
        }
    }

    printf("\nTop Subject: %s with average %.2f\n",sj_names[top_subject],sj_sum[top_subject]/3.0);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    struct point{
    float x;
    float y;
    }pt1,pt2;

    printf("x1 = ");
    scanf("%f",&pt1.x);
    printf("y1 = ");
    scanf("%f",&pt1.y);
    printf("x2 = ");
    scanf("%f",&pt2.x);
    printf("y2 = ");
    scanf("%f",&pt2.y);

    float distx = pt2.x - pt1.x;
    float disty = pt2.y - pt1.y;
    float dist_all = sqrt((distx * distx) + (disty * disty));

    printf("Distance between (%.2f,%.2f) and (%.2f,%.2f) is %.3f units(s)",pt1.x,pt1.y,pt2.x,pt2.y,dist_all);
    return 0;

}
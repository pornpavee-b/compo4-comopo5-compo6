#include<stdio.h>
int main()
{

    struct vector{
    float x;
    float y;
    }v,u,rest;

    printf("u_x = ");
    scanf("%f",&u.x);
    printf("u_y = ");
    scanf("%f",&u.y);
    printf("v_x = ");
    scanf("%f",&v.x);
    printf("v_y = ");
    scanf("%f",&v.y);

    rest.x = u.x + v.x;
    rest.y = u.y + v.y;
    printf("Resultant vector is equvalence to %.1fi + %.1fj\n",rest.x,rest.y);

    return 0;
}
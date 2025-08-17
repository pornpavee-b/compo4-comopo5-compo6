#include <stdio.h>

int main() 
{
    printf("Decimal   ASCII\n");
    for (int i = 33; i < 56; i++) 
    {
       
        printf("%d  %10c\n", i, i);
    }
    return 0;
}
#include <stdio.h>

int main() 
{
    int A[3][3] = {1, 0, -1,
                  -1, 2, 3,
                   2, 4, 5};
    int result[3][3]; 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < 3; k++) 
            {
                result[i][j] += A[i][k] * A[k][j];
            }
        }
    }
    printf("Result of A x A = \n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%3d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

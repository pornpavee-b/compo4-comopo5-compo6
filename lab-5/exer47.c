#include <stdio.h>
int main()
 {
    int A[3][3] = {1, 0, -1,
                  -1, 2, 3,
                   2, 4, 5};

    int transpose[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++) 
        {
            transpose[i][j] = A[j][i];
        }
    }
    printf(" Transpose of Matrix A = \n");
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("%3d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

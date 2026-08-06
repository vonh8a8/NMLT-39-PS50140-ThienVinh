#include <stdio.h>
int main()
{
    int A[3][5] = {{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15}};
    int B[5] = {3, 6, 7, 2, 4};
    float D[10];
    for (int i = 0; i < 5; i++)
    {
        printf("B[%d] = %d\n", i, B[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d\t", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}
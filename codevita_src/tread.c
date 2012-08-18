#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double matrix[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (scanf("%lf", &matrix[i][j]) != 1)
            {
                fprintf("matrix", "Failed to read matrix[%d][%d]\n", i, j);
                exit(1);
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%6.2f", matrix[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int r, c;
    int matrix[10][10];
    int scalar;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter elements:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter scalar value: ");
    scanf("%d", &scalar);
    printf("matrix:\n");
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j] * scalar);
        }
        printf("\n");
    }

    return 0;
}

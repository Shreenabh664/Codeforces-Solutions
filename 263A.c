#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[5][5];
    int x_index;
    int y_index;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1)
            {
                x_index = i + 1;
                y_index = j + 1;
            }
        }
    }
    printf("%d", abs(x_index - 3) + abs(y_index - 3));
}

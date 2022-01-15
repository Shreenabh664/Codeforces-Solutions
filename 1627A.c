#include <stdio.h>

int status_pointer_implementation(char (*arr)[50], int row, int col, int target_row, int target_col)
{
    char *target_element = *arr + (target_row - 1) * col + (target_col - 1);
    if (*target_element == 'B')
        return 0;
    for (int i = 0; i < col; i++)
    {
        if (*(*arr + (target_row - 1) * col + i) == 'B')
            return 1;
    }
    for (int i = 0; i < row; i++)
    {
        if (*(*arr + i * col + (target_col - 1)) == 'B')
            return 1;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (*(*arr + i * col + j) == 'B')
                return 2;
        }
    }
    return -1;
}

int main()
{
    int num_of_test_cases;
    scanf("%d", &num_of_test_cases);
    for (int i = 0; i < num_of_test_cases; i++)
    {
        int n, m, r, c;
        scanf("%d %d %d %d", &n, &m, &r, &c);
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf(" %c", &arr[i][j]);
            }
        }
        int result = status_pointer_implementation(arr, n, m, r, c);
        printf("%d\n", result);
    }
}

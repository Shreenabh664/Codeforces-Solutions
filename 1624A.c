#include <stdio.h>

int step_count(int *array, int n)
{
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    int min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return max - min;
}

int main()
{
    int num_testcases;
    scanf("%d", &num_testcases);
    for (int i = 0; i < num_testcases; i++)
    {
        int n;
        scanf("%d", &n);
        int array[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &array[j]);
        }
        printf("%d\n", step_count(array, n));
    }
}

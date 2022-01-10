#include <stdio.h>

int checkap(int *array)
{
    if (array[1] - array[0] == array[2] - array[1])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a[3];
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[j]);
        }
        if (checkap(a))
        {
            printf("YES\n");
        }
        else
        {

            if ((2 * a[1] - a[2]) / a[0] > 0 && (2 * a[1] - a[2]) % a[0] == 0)
            {
                printf("YES\n");
            }
            else if ((a[0] + a[2]) / (2 * a[1]) > 0 && (a[0] + a[2]) % (2 * a[1]) == 0)
            {
                printf("YES\n");
            }
            else if ((2 * a[1] - a[0]) / a[2] > 0 && (2 * a[1] - a[0]) % a[2] == 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
}

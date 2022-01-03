#include <stdio.h>

void print(int n, int k)
{
    int rook_count = k;
    for (int down_count = 0; down_count < n; down_count++)
    {
        for (int right_count = 0; right_count < n; right_count++)
        {
            if (down_count == right_count && right_count % 2 == 0 && rook_count > 0)
            {
                printf("R");
                rook_count--;
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
}

void dealwith(int n, int k)
{
    if (n >= 2 * k - 1)
    {
        print(n, k);
    }
    else
        printf("-1\n");
}
int main()
{
    int num_testcases;
    scanf("%d", &num_testcases);
    for (int i = 0; i < num_testcases; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        dealwith(n, k);
    }
}

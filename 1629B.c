#include <stdio.h>
#include <stdlib.h>

long long int num_even(long long int begin, long long int end)
{
    long long int even = (end - begin + 2 - (begin % 2)) / 2;
    return even;
}

int main()
{
    long int num_of_test_cases;
    scanf("%ld", &num_of_test_cases);
    for (long int i = 0; i < num_of_test_cases; i++)
    {
        long long int low, high, moves;
        scanf("%lld %lld %lld", &low, &high, &moves);
        long long int freq_2;
        long long int length = high - low + 1;
        if (low == high && low == 1)
        {
            printf("NO\n");
        }
        else if (low == high && low != 1)
        {
            printf("YES\n");
        }
        else
        {
            freq_2 = num_even(low, high);
            if (length - moves <= freq_2)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b)
{
    return *(long long int *)a - *(long long int *)b;
}

int main()
{
    unsigned int len;
    scanf("%d", &len);
    long long int *arr = (long long int *)malloc(len * sizeof(long long int));
    for (int i = 0; i < len; i++)
    {
        scanf("%lld", &arr[i]);
    }
    qsort(arr, len, sizeof(long long int), cmp);
    unsigned long long int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += llabs(arr[i] - (i + 1));
    }
    printf("%llu\n", sum);
    free(arr);
    return 0;
}

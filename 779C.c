#include <stdio.h>
#include <stdlib.h>

typedef struct weighted_num
{
    int num;
    int final_num;
    int weight;
} weighted_num;

void quick_sort(weighted_num *arr, int left, int right)
{
    int i = left, j = right;
    weighted_num tmp;
    int pivot = arr[(left + right) / 2].weight;

    while (i <= j)
    {
        while (arr[i].weight < pivot)
            i++;
        while (arr[j].weight > pivot)
            j--;
        if (i <= j)
        {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if (left < j)
        quick_sort(arr, left, j);
    if (i < right)
        quick_sort(arr, i, right);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    weighted_num *arr = malloc(sizeof(weighted_num) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].num);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i].final_num);
        arr[i].weight = arr[i].final_num - arr[i].num;
    }

    quick_sort(arr, 0, n - 1);

    int cost = 0;
    for (int i = n - 1; i >= n - k; i--)
    {
        cost += arr[i].num;
    }
    for (int i = n - k - 1; i >= 0; i--)
    {
        if (arr[i].num < arr[i].final_num)
            cost += arr[i].num;
        else
            cost += arr[i].final_num;
    }
    printf("%d\n", cost);
    free(arr);
    return 0;
}

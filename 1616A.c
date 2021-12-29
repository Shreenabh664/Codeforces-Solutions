#include <stdio.h>
#include <math.h>
#include <stdlib.h>

unsigned int deduplicate(int n, int a[n]) // find number of unique integers in array
{
    if (n <= 0)
    {
        return 0;
    } // edge case

    int ans = n, i, j, k; // remove duplicate entries from array
    for (i = 0; i < ans; i++)
    {
        for (j = i + 1; j < ans; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < ans - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                ans--;
                j--;
            }
        }
    }
    return ans;
}

// function that returns frequency of a an integer "n" in an array "a"
int frequency(int n, int a[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == n)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int num_testcases;
    scanf("%d", &num_testcases);
    for (int i = 0; i < num_testcases; i++)
    {
        int unique_count = 0;
        int len = 0;
        scanf("%d", &len);
        int array[len];
        for (int j = 0; j < len; j++)
        {
            int num;
            scanf("%d", &num);
            array[j] = abs(num);
        }
        int array_copy[len];
        for (int j = 0; j < len; j++)
        {
            array_copy[j] = array[j];
        }
        unsigned int dedup_len = deduplicate(len, array_copy);
        for (int j = 0; j < dedup_len; j++)
        {
            if (array_copy[j] == 0)
            {
                unique_count++;
            }
            else
            {
                if (frequency(array_copy[j], array, len) == 1)
                {
                    unique_count++;
                }
                else if (frequency(array_copy[j], array, len) > 1)
                {
                    unique_count = unique_count + 2;
                }
            }
        }
        printf("%d\n", unique_count);
    }
}

#include <stdio.h>
#include <math.h>

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

int main()
{
    unsigned int num_toys;
    unsigned int budget;
    scanf("%u %u", &num_toys, &budget);
    unsigned int collection[num_toys];
    for (int i = 0; i < num_toys; i++)
    {
        scanf("%u", &collection[i]);
    }
    unsigned int budget_left = budget;
    int len = sqrt(2 * budget) + 1;
    unsigned int purchase[len];
    qsort(collection, num_toys, sizeof(unsigned int), compare);

    int index = 0;
    for (int i = 1; i <= budget_left; i++)
    {
        int found = 0;
        int low = 0;
        int high = num_toys - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (collection[mid] == i)
            {
                found = 1;
                break;
            }
            else if (collection[mid] > i)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        if (found == 0)
        {
            purchase[index] = i;
            budget_left -= i;
            index++;
        }
    }
    printf("%u\n", index);
    for (int i = 0; i < index; i++)
    {
        printf("%u", purchase[i]);
        if (i != index - 1)
        {
            printf(" ");
        }
    }
    printf("\n");
}

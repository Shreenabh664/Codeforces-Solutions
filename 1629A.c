#include <stdio.h>
#include <stdlib.h>

typedef struct purchase
{
    int cost;
    int value;
} purchase;

int compare_cost(const void *a, const void *b)
{
    purchase *p1 = (purchase *)a;
    purchase *p2 = (purchase *)b;
    return p1->cost - p2->cost;
}

int main()
{
    int num_of_test_cases;
    scanf("%d", &num_of_test_cases);
    for (int i = 0; i < num_of_test_cases; i++)
    {
        int n, k;
        scanf("%d %d", &n, &k);
        purchase *purchases = malloc(n * sizeof(purchase));
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &purchases[j].cost);
        }
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &purchases[j].value);
        }
        qsort(purchases, n, sizeof(purchase), compare_cost);
        int budget = k;
        for (int j = 0; j < n; j++)
        {
            if (purchases[j].cost <= budget)
            {
                budget += purchases[j].value;
            }
        }
        printf("%d\n", budget);
    }
}

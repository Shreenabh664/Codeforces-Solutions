#include <stdio.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    return *(char *)a - *(char *)b;
}

int main()
{
    int num_test_cases;
    scanf("%d", &num_test_cases);
    for (int i = 0; i < num_test_cases; i++)
    {
        char str[55];
        scanf("%s", str);
        qsort(str, strlen(str), sizeof(char), cmp);
        printf("%s\n", str);
    }
}

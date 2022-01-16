#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int find_index(char *str)
{
    int len = strlen(str);
    int sum;
    for (int i = len - 1; i >= 0; i--)
    {
        int dig1 = str[i] - '0';
        int dig2 = str[i + 1] - '0';
        sum = dig1 + dig2;
        if (sum > 9)
            return i;
        sum = 0;
    }
    return -1;
}

int main()
{
    int num_test_cases;
    scanf("%d", &num_test_cases);
    for (int i = 0; i < num_test_cases; i++)
    {
        char *str = (char *)malloc(sizeof(char) * 200001);
        scanf("%s", str);
        int len = strlen(str);
        str = (char *)realloc(str, sizeof(char) * (len + 1));
        str[len] = '\0';
        int index = find_index(str);
        if (index != -1)
        {
            int dig1 = str[index] - '0';
            int dig2 = str[index + 1] - '0';
            int sum = dig1 + dig2;
            str[index] = sum / 10 + '0';
            str[index + 1] = sum % 10 + '0';
        }
        else
        {
            int dig1 = str[0] - '0';
            int dig2 = str[1] - '0';
            int sum = dig1 + dig2;
            str[0] = sum + '0';
            for (int j = 1; j < len; j++)
                str[j] = str[j + 1];
        }
        printf("%s\n", str);
        free(str);
    }
    return 0;
}

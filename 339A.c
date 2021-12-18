#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char string[100];
    scanf("%s", string);
    int len = strlen(string);
    char *array[len];
    int i = 0;
    array[i] = strtok(string, "+");

    while (array[i] != NULL)
    {
        array[++i] = strtok(NULL, "+");
    }

    int intarray[i];
    for (int j = 0; j < i; j++)
    {
        intarray[j] = atoi(array[j]);
    }

    for (int j = 0; j < i; j++)
    {
        for (int k = j + 1; k < i; k++)
        {
            if (intarray[j] > intarray[k])
            {
                int temp = intarray[j];
                intarray[j] = intarray[k];
                intarray[k] = temp;
            }
        }
    }

    for (int j = 0; j < i; j++)
    {
        printf("%d", intarray[j]);
        if (j != i - 1)
        {
            printf("+");
        }
    }
}
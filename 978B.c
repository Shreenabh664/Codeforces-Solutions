#include <stdio.h>

int threeX(char *str)
{
    int i = 0;
    int count = 0;
    int index = -1;
    while (str[i] != '\0')
    {
        if (str[i] == 'x')
        {
            count++;
            if (count == 3)
            {
                index = i - 2;
                break;
            }
        }
        else
        {
            count = 0;
        }
        i++;
    }
    return index;
}

int main()
{
    int len;
    scanf("%d", &len);
    char str[len + 1];
    scanf("%s", str);
    int delete_count = 0;
    while (threeX(str) != -1)
    {
        int index = threeX(str);
        for (int i = index; i < len; i++)
        {
            str[i] = str[i + 1];
        }
        delete_count++;
    }
    printf("%d\n", delete_count);
}

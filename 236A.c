#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int distinct;
    for (int i = 0; i < strlen(str); i++)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (str[i] == str[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            distinct++;
        }
    }
    if (distinct % 2 == 1)
    {
        printf("IGNORE HIM!");
    }
    else
        printf("CHAT WITH HER!");
}

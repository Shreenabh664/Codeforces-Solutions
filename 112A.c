#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str1[101];
    char str2[101];
    scanf("%s", str1);
    scanf("%s", str2);
    int len = strlen(str1);
    for (int i = 0; i < len; i++)
    {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; i < len; i++)
    {
        str2[i] = tolower(str2[i]);
    }
    int res = strcmp(str1, str2);
    if (res == 0)
    {
        printf("0\n");
    }
    else if (res > 0)
    {
        printf("1\n");
    }
    else
    {
        printf("-1\n");
    }
}

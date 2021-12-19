#include <stdio.h>
#include <string.h>
#define MAXN 19

int main()
{
    char s[MAXN];
    scanf("%s", s);
    int luckycount = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '4' || s[i] == '7')
        {
            luckycount++;
        }
    }
    if (luckycount == 4 || luckycount == 7)
    {
        printf("YES");
    }
    else
        printf("NO");
}

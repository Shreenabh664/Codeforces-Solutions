#include <stdio.h>
int isSubsequence(char *str, char *sub)
{
    int i = 0, j = 0;
    while (str[i] != '\0')
    {
        if (str[i] == sub[j])
            j++;
        if (sub[j] == '\0')
            return 1;
        i++;
    }
    return 0;
}

int main()
{
    char str[1001];
    scanf("%s", str);
    char *sub = "heidi";
    if (isSubsequence(str, sub))
        printf("YES\n");
    else
        printf("NO\n");
}

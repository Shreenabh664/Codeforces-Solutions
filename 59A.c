#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[101];
    scanf("%s", s);
    int i, uppercase = 0, lowercase = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (isupper(s[i]))
        {
            uppercase++;
        }
        else
        {
            lowercase++;
        }
    }
    if (uppercase > lowercase)
    {
        for (i = 0; i < strlen(s); i++)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (i = 0; i < strlen(s); i++)
        {
            s[i] = tolower(s[i]);
        }
    }
    printf("%s", s);
    return 0;
}

#include <stdio.h>

int vowelCount(char *str)
{
    int count = 0;
    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
            count++;
        str++;
    }
    return count;
}

int main()
{
    char line1[102];
    fgets(line1, 102, stdin);
    char line2[102];
    fgets(line2, 102, stdin);
    char line3[102];
    fgets(line3, 102, stdin);

    if (vowelCount(line1) == 5 && vowelCount(line2) == 7 && vowelCount(line3) == 5)
        printf("YES\n");
    else
        printf("NO\n");
}

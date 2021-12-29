#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char *word = (char *)malloc(sizeof(char) * 101);
        if (word != NULL)
        {
            scanf("%s", word);
            word = realloc(word, sizeof(char) * (strlen(word) + 1));
        }
        int len = strlen(word);
        if (len > 10)
        {
            char first, last;
            first = word[0];
            last = word[strlen(word) - 1];
            printf("%c%d%c\n", first, (strlen(word) - 2), last);
        }
        else
        {
            printf("%s\n", word);
        }
    }
}

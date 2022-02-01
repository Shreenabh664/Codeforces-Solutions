#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int size;
        scanf("%d", &size);
        char *str = (char *)malloc(sizeof(char) * (size + 1));
        scanf("%s", str);
        if (strcmp(str, "1") == 0 || strcmp(str, "10") == 0 || strcmp(str, "01") == 0 || strcmp(str, "0") == 0)
        {
            printf("%s\n", "YES");
        }
        else
        {
            printf("%s\n", "NO");
        }
        free(str);
    }
    return 0;
}

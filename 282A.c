#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    int val = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char s[4];
        scanf("%s", s);
        if (strcmp(s, "X++") == 0 || strcmp(s, "++X") == 0)
        {
            val++;
        }
        else
        {
            val--;
        }
    }
    printf("%d", val);
}

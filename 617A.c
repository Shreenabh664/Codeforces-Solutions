#include <stdio.h>

int main()
{
    int coord;
    scanf("%d", &coord);
    int count = 0;
    while (coord > 0)
    {
        if (coord >= 5)
        {
            coord -= 5;
            count++;
        }
        else if (coord >= 4)
        {
            coord -= 4;
            count++;
        }
        else if (coord >= 3)
        {
            coord -= 3;
            count++;
        }
        else if (coord >= 2)
        {
            coord -= 2;
            count++;
        }
        else if (coord >= 1)
        {
            coord -= 1;
            count++;
        }
    }

    printf("%d", count);
}

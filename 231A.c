#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nump = 0;
    for (int i = 0; i < n; i++)
    {
        int num1, num2, num3;
        scanf("%d %d %d", &num1, &num2, &num3);
        int surity = 0;
        if (num1 == 1)
        {
            surity++;
        }
        if (num2 == 1)
        {
            surity++;
        }
        if (num3 == 1)
        {
            surity++;
        }
        if (surity >= 2)
        {
            nump++;
        }
    }
    printf("%d", nump);
    return 0;
}

#include <stdio.h>

int main(void)
{
    int a, other_nums, num;
    scanf("%d", &a);
    while (a > 0)
    {
        num = a % 10;
        other_nums = a / 10;
        while (other_nums > 0)
        {
            if (num == other_nums % 10)
            {
                printf("YES\n");
                return 0;
            }
            other_nums /= 10;
        }
        a /= 10;
    }
    printf("NO\n");
    return 0;
}

/*
#include <stdio.h>
#define BASE 10

int main(void)
{
    int a, other_nums, num;
    scanf("%d", &a);
    while (a > 0)
    {
        num = a % BASE;
        other_nums = a / BASE;
        while (other_nums > 0)
        {
            if (num == other_nums % BASE)
            {
                printf("YES\n");
                return 0;
            }
            other_nums /= BASE;
        }
        a /= BASE;
    }
    printf("NO\n");
    return 0;
}

#include <stdio.h>
#define BASE 10

int main(void)
{
    int a, num;
    int flag = 0;
    for(scanf("%d", &a); a > 0 && !flag; a /= BASE)
    {
        num = a % BASE;
        for(int other_num = a / BASE; other_num > 0 && !flag; other_num /= BASE)
        {
            flag = (num == other_num % BASE) ? 1 : 0;
        }
    }
    flag ? printf("YES\n") : printf("NO\n");
    return 0;
}
*/

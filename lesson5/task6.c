#include <stdio.h>

int grow_up(int n)
{
    int result = 1;
    while (n > 0)
    {
        int lastnum = n % 10;
        int prelastnum = (n / 10) % 10;
        if (lastnum < prelastnum)
        {
            result = 0;
            goto skip;
        }
        n /= 10;
    }
skip:
    return result;
}

int main(int argc, char const *argv[])
{
    int a;
    scanf("%d", &a);
    printf("%s", grow_up(a) == 1 ? "YES" : "NO");
    return 0;
}

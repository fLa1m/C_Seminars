#include <stdio.h>

int power(int a, int p)
{
    int result = 1;
    for (int i = 1; i <= p; ++i)
    {
        result *= a;
    }
    return result;
}

int main(void)
{
    int a, p;
    scanf("%d%d", &a, &p);
    printf("%d", power(a, p));
    return 0;
}

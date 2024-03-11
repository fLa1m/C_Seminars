#include <stdio.h>

int notation(int n, int p)
{
    int remainder;
    int exponent = 1;
    int res = 0;
    for (; n > 0; n /= p)
    {
        remainder = n % p;
        res += remainder * exponent;
        exponent *= 10;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d\n", notation(n, p));
    return 0;
}

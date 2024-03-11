#include <stdio.h>

int factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

#include <stdio.h>

int sum_numbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return sum_numbers(n-1) + n;
}

int main(void)
{
    printf("%d\n", sum_numbers(5));
    return 0;
}

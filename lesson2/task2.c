#include <stdio.h>

int main(void)
{
    int a1, n, d;
    int sum;
    scanf("%d%d%d", &a1, &n, &d); // в scanf лучше не добавлять лишние символы ("%d,%d,%d")
    sum = (2*a1 + (n-1)*d)*n/2;
    printf("%d\n", sum);
    return 0;
}
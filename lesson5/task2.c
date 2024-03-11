#include <stdio.h>

float middle(int a, int b)
{
    return (a + b) / 2.0;
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%.2f", middle(a, b));
    return 0;
}

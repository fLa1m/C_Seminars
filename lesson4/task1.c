#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d %d %d ", i, i*i, i*i*i);
    }
    /*
    i = 1;
    while (i <= n)
    {
        printf("%d %d %d ", i, i*i, i*i*i);
        i++;
    }
    */
    return 0;
}

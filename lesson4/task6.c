#include <stdio.h>

int main(void)
{
    unsigned int a, count = 0;
    do
    {
        scanf("%d", &a);
        if (a != 0)
        {
            count++;
        }
    } while (a != 0);
    printf("%d", count);
    return 0;
}
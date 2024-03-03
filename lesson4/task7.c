#include <stdio.h>

int main(void)
{
    int a, sum = 0;
    scanf("%d", &a);
    do
    {
        int num = a % 10;
        sum += num;
        a /= 10;
    } while (a != 0);

    if (sum == 10)  
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}

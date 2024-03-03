#include <stdio.h>

int main(void)
{
    int a;
    scanf("%d", &a);
    while (a > 0)
    {
        int num, next_num;
        num = a % 10;
        next_num = (a / 10) % 10;
        if (num == next_num)
        {
            printf("YES\n");
            return 0;
        }
        a /= 10;
    }
    printf("NO\n");
    return 0;
}

/*
#include <stdio.h>
enum {BASE=10};
int main(void)
{
    int n, n1 = 1, n2 = 0;
    scanf("%d", &n);

    if(n)
    {
        do
        {
            n1 = n % BASE;
            n /= BASE;
            n2 = n % BASE;
        } while(n > 0 && n1 != n2);
    }
    
    if(n1 == n2)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
*/
#include <stdio.h>

int main(void)
{
    unsigned int a, count = 0;
    do
    {
        scanf("%d", &a);
        if (a % 2 == 0 && a != 0)
        {
            count++;
        }
        
    } while (a != 0);
    printf("%d", count);
    return 0;
}

/*
#include <stdio.h>

int main(void)
{
    int a, num = 0;
    for(scanf("%d", &a); a != 0; scanf("%d", &a))
    {
        if(a % 2 == 0)
        {
            num++;
        }
    }
    printf("%d\n", num);
    return 0;
}
*/

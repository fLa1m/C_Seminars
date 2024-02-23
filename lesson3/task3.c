#include <stdio.h>
int main(void)
{
    int a, max;
    scanf("%d", &a);
    max = a / 100;
    if ((max < (a % 100) / 10) && 
        (((a % 100) / 10) >= (a % 10)))
    {
        max = (a % 100) / 10;
        printf("%d", max);
    } 
    else if (max < (a % 10))
    {
        max = (a % 10);
        printf("%d", max);
    }
    else
    {
        printf("%d", max);
    }
    return 0;
    /*
    int n;
    scanf ("%d", &n);
    int n2 = n / 100 % 10;//В С99 можно так
    int n1 = n / 10 % 10;
    int n0 = n % 10;
    int max = n2 > n1 ? n2 : n1;
    max = max > n0 ? max : n0;
    printf("%d",max);
    */
}

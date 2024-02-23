#include <stdio.h>

int main(void)
{
    int a, b, c, max;
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (max < b && b >= c){
        max = b;
        printf("%d", max);
    } 
    else if (max < c)
    {
        max = c;
        printf("%d", max);
    }
    else
    {
        printf("%d", max);
    }
    return 0;
    /*
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int max = a > b ? a : b;
    max = max > c ? max : c;
    printf("%d",max);
    */
}

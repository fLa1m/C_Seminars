#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a<=b){
        printf("%d %d", a, b);
    }
    else {
        printf("%d %d", b, a);
    }
    return 0;
    /*
    int a, b, max, min;
    scanf("%d%d", &a, &b);
    max = a > b ? a : b;//всего две строки кода!
    min = a < b ? a : b;//всего две строки кода!
    printf("%d %d",max,min);
    */
}

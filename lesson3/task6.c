#include <stdio.h>

int main(void)
{
    int x, y, x0, y0, a, b;
    float N;
    scanf("%d%d%d%d%d%d", &x0, &y0, &a, &b, &x, &y);
    x -= x0, y -= y0;
    N = (float)((x*x)/(a*a)) + ((y*y) / (b*b));
    N < 1 ? printf("YES\n") : printf("NO\n");
    printf("N=%f\n", N); 
    return 0;
}

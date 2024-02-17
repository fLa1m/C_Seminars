#include <stdio.h>

int main(void)
{
    float a1, a2, a3;
    float avg;
    scanf("%f%f%f", &a1, &a2, &a3);
    avg = (a1 + a2 + a3)/3;// либо вместо 3 напиисать 3.0, чтобы перейти в пространство веществ. чисел
    printf("%.2f\n", avg);
    return 0;
}

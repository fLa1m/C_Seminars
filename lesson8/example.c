#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m[3][2] = 
    {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int *p1;
    int (*p2)[2];
    p1 = m[2]; // 5
    p2 = m + 2; // 5
    p1++; // 6
    p2 -= 2;// 1
    printf("%d, %d\n", *p1, **p2);
    int a[2] = {10, 20};
    int *pa = a; // 10
    int b = *pa + 20; // 30
    pa++; // 20
    *pa = 30; // a[0] = 10; a[1] = 30;
    printf("%d %d %d", *pa, a[0], a[1]);
    return 0;
}

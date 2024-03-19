#include <stdio.h>

int isSimple(int a, int div)
{
    if (a == div)
    {
        return 1;
    }
    if ((a > 1) && (a % div != 0))
    {
        return isSimple(a, div + 1);
    }
    else
    {
        return 0;
    }
}

int main(int argc, char const *argv[])
{
    isSimple(11, 11/2) ? printf("YES") : printf("NO");
    return 0;
}

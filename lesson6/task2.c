#include <stdio.h>

void recurs(int n)
{
    if (n > 0)
    {
        printf("%d ", n%10);
        recurs(n/10);
    }
}

int main(int argc, char const *argv[])
{
    recurs(54321);
    return 0;
}


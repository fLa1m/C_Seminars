#include <stdio.h>

void print_digits(int n)
{
    if (n > 10)
    {
        print_digits(n / 10);
    }
    printf("%d ", n % 10);
}

int main(int argc, char const *argv[])
{
    print_digits(709);
    return 0;
}

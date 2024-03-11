#include <stdio.h>

char* sumOfNumbersIsDivide2(int a)
{
    int hasPair = 0;
    while (a > 0)
    {
        int number = a % 10;
        if (number % 2 != 0)    
        {
            hasPair = (hasPair == 0) ? 1 : 0;
        }
        a /= 10;
    }
    return hasPair == 0 ? "Yes" : "No";
}

int main(int argc, char const *argv[])
{
    printf("%s\n", sumOfNumbersIsDivide2(123));
    printf("%s\n", sumOfNumbersIsDivide2(124));
    return 0;
}

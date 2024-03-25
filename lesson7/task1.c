#include <stdio.h>

const static int COUNT = 10;

int main(int argc, char const *argv[])
{
    int numbers[COUNT];

    for (int i = 0; i < COUNT; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    int *max1 = numbers;
    for (int i = 1; i < COUNT; i++)
    {
        if (*max1 < numbers[i])
        {
            max1 = numbers + i;
        }
    }
    
    int max2 = (max1 == numbers) ? numbers[1] : numbers[0];
    for (int i = 1; i < COUNT; i++)
    {
        if (max2 < numbers[i] && (max1 != numbers + i))
        {
            max2 = numbers[i];
        }
    }
    printf("summax = %d", *max1 + max2);
    return 0;
}

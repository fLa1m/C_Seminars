#include <stdio.h>

const static int COUNT = 10;
int main(int argc, char const *argv[])
{
    int numbers[COUNT];

    for (int i = 0; i < COUNT; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int index_max = 0;
    int max = numbers[0];
    for (int i = 1; i < COUNT; i++)
    {
        if (max <= numbers[i])
        {
            max = numbers[i];
            index_max = i;
        }
    }
    
    int index_min = 0;
    int min = numbers[0];
    for (int i = 1; i < COUNT; i++)
    {
        if (min >= numbers[i])
        {
            min = numbers[i];
            index_min = i;
        }
    }

    printf("index_max = %d, max = %d, index_min = %d, min = %d", index_max+1, max, index_min+1, min);
    return 0;
}

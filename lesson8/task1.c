#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number[1000];
    int number_size = 0;

    for (int i = 0; i < 1000; i++)
    {
        char c;
        scanf("%c", &c);
        if (c >= '0' && c <= '9')
        {
            number[i] = c - 48;
            number_size++;
        }
        else
        {
            break;
        } 
    }
    
    int count[10];

    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 0; i < number_size; i++)
    {
        count[number[i]]++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i])
        {
            printf("%d %d ", i, count[i]);
        }
    }
    return 0;
}

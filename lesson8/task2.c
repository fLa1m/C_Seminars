#include <stdio.h>
#include <string.h>

void print_digit(char s[])
{
    int count[10];

    for (int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < strlen(s) + 1; i++)
    {
        int res = -1;
        if (s[i] >= '0' && s[i] <= '9')
        {
            res = s[i] - '0';
            count[res]++;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (count[i])
        {
            printf("%d %d ", i, count[i]);
        }
    }    
}

int main(int argc, char const *argv[])
{
    char string[1000];
    scanf("%[^\n]", string);
    print_digit(string);
    return 0;
}

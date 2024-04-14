#include <stdio.h>
#include <string.h>

#define MAXSTRING 100

void input(char *string)
{
    FILE *in;
    in = fopen("input.txt", "r");
    while (fscanf(in, "%[^\n]", string) == 1);
    fclose(in);
}

void output (char *str)
{
    FILE *out;
    out = fopen("output.txt", "w");
    int len = strlen(str) - 1;
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == str[len])
        {
            fprintf(out, "%d ", i);
        }
    }
    fclose(out);
}

int main(int argc, char const *argv[])
{
    char string_file[MAXSTRING];
    input(string_file);
    output(string_file);
    return 0;
}

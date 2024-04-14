#include <stdio.h>
#include <string.h>

#define LEN 100

void input(char *string)
{
    FILE *in;
    in = fopen("input.txt", "r");
    while (fscanf(in, "%[^\n]", string) == 1);
    fclose(in);
}

void output(char *string)
{
    FILE *out;
    out = fopen("output.txt", "w");

}

int main(int argc, char const *argv[])
{
    char line[LEN];
    input(line);
    int line_len = strlen(line) - 1;
    int count_small = 0;
    int count_big = 0;

    FILE *out;
    out = fopen("output.txt", "w");

    for (int i = 0; i <= line_len; i++)
    {
        if (line[i] >= 'a' && line[i] <= 'z')
        {
            count_small++;
        }
        else if (line[i] >= 'A' && line[i] <= 'Z')
        {
            count_big++;
        }
    }

    fprintf(out, "%d %d", count_small, count_big);
    fclose(out);
    return 0;
}

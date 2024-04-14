#include <stdio.h>
#include <string.h>

const int line_width = 1024;

int is_palindrom(char str[])
{
    int length = strlen(str) - 1;
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - i])
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char * input_fn = "input.txt";
    char * output_fn = "output.txt";
    char line[line_width];
    FILE *fp;
    fp = fopen(input_fn, "r");
    fscanf(fp, "%[^\n]", line);
    fclose(fp);
    fp = fopen(output_fn, "w");
    fprintf(fp, "%s", is_palindrome(line) ? "YES" : "NO");
    fclose(fp);
    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numbers[1000];
    int number_size;
    // ----
    int pack[number_size + 1];
    int pack_size = 0;

    int cur_value = 0;
    pack[0] = 0;
    for (int i = 0; i < number_size; i++)
    {
        if (numbers[i] == cur_value)
        {
            pack[pack_size]++;
        }
        else
        {
            cur_value = numbers[i];
            pack_size++;
            pack[pack_size] = 1;
        }
    }
    pack_size++;
    return 0;
}

#include <stdio.h>

int main()
{
    char *dd = "_putchar";

    while (*dd)
    {
        putchar(*dd);
        dd++;
    }
    putchar('\n');

    return (0);
}
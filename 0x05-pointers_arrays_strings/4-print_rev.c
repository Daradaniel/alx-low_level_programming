#include "main.h"
/**
 * print_rev - minic the stdio version of puts
 * @s: the value to process to the stdout in reverse.
 */
void print_rev(char *s)
{
int count = 0, i;

while (s[i++])
count++;

for (i = count - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}

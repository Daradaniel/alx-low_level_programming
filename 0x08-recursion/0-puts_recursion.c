#include "main.h"

/**
 * _puts_recursion - Prints a string
 *
 * @s: char arg
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
=======

>>>>>>> 2e800e314c431f73061e6f0d91ae600b075e03ee

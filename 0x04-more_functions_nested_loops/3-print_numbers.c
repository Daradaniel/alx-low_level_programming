#include "main.h"

/**
 * Print_numbers: A function that prints numbers fron 0 -9 
 * 
 * Return: 0-9 followed by a newline
 */
void print_numbers(void)
{
    int i;

    for (i = 0; i <= 9; i++)
            _putchar(i + '0');
    _putchar('\n');
}
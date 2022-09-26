#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @dest: A pointer to the memory area to be filled.
 * @src: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

/*Delacring FOR*/
for (i = 0; i < n; i++)
{
*(dest + i) = src; /*add 1 position s*/

} /*END FOR*/

return (dest);
}

#include "main.h"

/**
 * *_memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: Value to be set.
 * @n: Number of bytes to be set.
 *
 * Return: Pointer to the filled memory area (@s).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}

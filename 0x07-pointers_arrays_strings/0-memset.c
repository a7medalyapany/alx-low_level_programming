#include "main.h"

/**
 * *_memset - method name
 * @s: ID
 * @b: ID
 * @n: ID
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
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

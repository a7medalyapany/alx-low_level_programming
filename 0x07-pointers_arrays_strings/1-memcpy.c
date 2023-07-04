#include "main.h"

/**
 * *_memcpy - method name
 * @dest: ID
 * @src: ID
 * @n: ID
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

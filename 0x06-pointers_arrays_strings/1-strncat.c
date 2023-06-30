#include "main.h"

/**
 * _strncat - writes the char c to stdout
 *
 * @dest: var for alx
 * @src: var for alx
 * @n: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
	{
		c++
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = '\0';

	return (dest);
}

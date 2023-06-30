#include "main.h"

/**
 * _strcat - writes the char c to stdout
 *
 * @dest: var for alx
 * @src: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	while (dest[c])
	{
		c++
	}
	for (c2 = 0; src[c2]; c2++)
	{
		dest[c++] = src[c2];
	}
	return (dest);
}

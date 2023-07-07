#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to be copied from @src.
 *
 * Return: Pointer to the resulting string (@dest).
 */
char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
	{
	c++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c + i] = src[i];
	}
	dest[c + i] = '\0';

	return (dest);
}


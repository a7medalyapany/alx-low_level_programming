#include "main.h"

/**
 * _strncpy - writes the char c to stdout
 *
 * @dest: var for alx
 * @src: var for alx
 * @n: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}

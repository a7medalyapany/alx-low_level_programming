#include "main.h"
#include <stdio.h>

/**
 * isLower - writes the char c to stdout
 *
 * @c: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int isLower(int c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - writes the char c to stdout
 *
 * @c: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"()[}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - writes the char c to stdout
 *
 * @s: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */

char *cap_string(char *s)
{
	char *ptr = s;
	int fd = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			fd = 1;
		else if (isLower(*s) && fd)
		{
			*s -= 32;
			fd = 0;
		}
		else
			fd = 0;
		s++
	}
	return (ptr);
}

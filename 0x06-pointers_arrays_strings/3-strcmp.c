#include "main.h"

/**
 * _strcmp - writes the char c to stdout
 *
 * @s1: var for alx
 * @s2: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int _strcmp(char *s1, char *s2)
{
	int q = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			q = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (q);
}

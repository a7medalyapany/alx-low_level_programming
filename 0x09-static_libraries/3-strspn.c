#include "main.h"

/**
 * _strspn - method name
 * @s: ID
 * @accept: ID
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (i);
}

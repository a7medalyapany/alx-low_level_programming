#include "main.h"

/**
 * *_strchr - method name
 * @s: ID
 * @c: ID
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}

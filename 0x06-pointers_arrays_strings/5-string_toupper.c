#include "main.h"

/**
 * *string_toupper - writes the char c to stdout
 *
 * @a: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}
	return (a);
}

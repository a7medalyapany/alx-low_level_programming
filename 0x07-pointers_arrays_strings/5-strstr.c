#include "main.h"

/**
 * *_strstr - method name
 * @haystack: ID
 * @needle: ID
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
char *_strstr(char *haystack, char *needle)
{

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}

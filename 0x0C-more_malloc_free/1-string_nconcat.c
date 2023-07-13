#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes from s2 to concatenate
 *
 * Return: Pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concatenated = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0';

	return (concatenated);
}


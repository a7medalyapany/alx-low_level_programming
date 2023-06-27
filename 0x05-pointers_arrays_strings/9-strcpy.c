#include "main.h"


/**
 * *_strcpy - method for ALX task
 * @dest: ID for alx task
 * @src: ID for alx task
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < n && *src[i] != '\0'; i++)
		*dest[i] = *src[i];
	for ( ; i < n; i++)
		*dest[i] = '\0';

	return (*dest);
}

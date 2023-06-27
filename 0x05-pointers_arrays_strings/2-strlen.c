#include "main.h"

/**
 * _strlen - method for ALX task
 * @s: ID for alx task
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
	{
		++c;
	}
	return (c);
}

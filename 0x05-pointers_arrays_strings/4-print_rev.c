#include "main.h"

/**
 * print_rev - method for ALX task
 * @s: ID for alx task
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

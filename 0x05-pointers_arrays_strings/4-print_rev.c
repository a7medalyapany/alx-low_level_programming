#include "main.h"

/**
 * print_rev - method for ALX task
 * @s: ID for alx task
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(*s); i >= 0; i--)
	{
		_putchar(*s[i] + 0);
	}
	_putchar('\n');
}

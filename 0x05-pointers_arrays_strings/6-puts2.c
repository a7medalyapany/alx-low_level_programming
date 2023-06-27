#include "main.h"

/**
 * puts2 - method for ALX task
 * @str: ID for alx task
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i != '\0'; i += 2)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}

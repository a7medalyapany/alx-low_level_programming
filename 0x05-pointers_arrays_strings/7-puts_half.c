#include "main.h"

/**
 * puts_half - method for ALX task
 * @str: ID for alx task
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n, i;

	i = strlen(*str) % 2;
	if (i == 0)
	{
		for (n = strlen(*str) / 2 ; n != '\0'; n++)
			_putchar(*str[n]);
	}
	else
	{
		for (n = (strlen(*str) - 1) / 2; n != '\0'; n++)
			_putchar(*str[n]);
	}
	_putchar('\n');
}

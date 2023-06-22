#include "main.h"

/**
 * print_numbers - method for ALX task
 *
 * Return: 1 if on success, 0 if not
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}

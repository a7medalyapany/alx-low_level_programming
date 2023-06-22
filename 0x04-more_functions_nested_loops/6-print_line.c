#include "main.h"

/**
 * print_line - method for ALX task
 * @n: ID for alx task
 *
 * Return: 1 if on success, 0 if not
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('n');
	}
	_putchar('\n');
}

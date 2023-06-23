#include "main.h"

/**
 * print_diagonal - method for ALX task
 * @n: ID for alx task
 *
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i < n; j++)
	{
		for (j = 1; j < n; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

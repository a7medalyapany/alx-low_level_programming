#include "main.h"

/**
 * print_diagonal - method for ALX task
 * @n: ID for alx task
 *
 * Return: 1 if on success, 0 if not
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; j++)
	{
		for (j = 0; j < n; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_ln - print a straight ln
 * @n: ID for alx task
 *
 */
void print_ln(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}

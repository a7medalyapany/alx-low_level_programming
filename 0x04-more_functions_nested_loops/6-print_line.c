#include "main.h"

/**
 * print_line - method for ALX task
 * @n: ID for alx task
 *
 * Return: 1 if on success, 0 if not
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('_');
			n--;
		}
	}
}

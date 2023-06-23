#include "main.h"

/**
 * print_triangle - method for ALX task
 * @size: ID for alx task
 *
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar(' ');
		}
	}
}

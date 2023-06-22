#include "main.h"

/**
 * print_square - method for ALX task
 * @size: ID for alx task
 *
 * Return: 1 if on success, 0 if not
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

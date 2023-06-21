#include "main.h"

/**
 * print_to_98 - Prints every minute of the day of Jack Bauer
 * @n: first number in interval
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			_putchar('n');
			_putchar(',');
			_putchar(' ');
			n++; 
		}
	}
	else
	{
		while (n >= 98)
		{
			_putchar('n');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
}

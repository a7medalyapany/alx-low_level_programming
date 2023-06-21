#include "main.h"

/**
* print_last_digit - Alx task
* @c: the character to be checked
*
* Return: 1 if c is lowercase, 0 otherwise
*/

int print_last_digit(int c)
{
	int ld;

	ld = c % 10;
	if (ld < 0)
		ld = -ld;

	_putchar(ld + '0');
	return (ld);
}

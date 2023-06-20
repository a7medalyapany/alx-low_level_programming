#include <stdio.h>

/**
* _islower - check the lowercase charachter
* @c: the character to be checked
*
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
* main - Entry point
*
* Description: ALX tasks
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');

	return (0);
}

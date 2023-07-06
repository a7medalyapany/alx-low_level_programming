#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - writes the char c to stdout
 * @s: the character to print
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

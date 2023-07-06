#include <unistd.h>
#include "main.h"

/**
 * _strlen_recursion - writes the char c to stdout
 * @s: the character to print
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

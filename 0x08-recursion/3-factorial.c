#include "main.h"

/**
 * factorial - writes the char c to stdout
 * @n: the character to print
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n <= 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}

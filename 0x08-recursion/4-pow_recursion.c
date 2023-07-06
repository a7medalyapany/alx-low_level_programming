#include "main.h"

/**
 * _pow_recursion - fn
 * @x: Id
 * @y: ID
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

#include "main.h"

/**
 * swap_int- method for ALX task
 * @a: ID for alx task
 * @b: Id for alx task
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

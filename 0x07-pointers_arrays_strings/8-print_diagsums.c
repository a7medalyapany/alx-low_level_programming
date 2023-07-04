#include "main.h"

/**
 * print_diagsums - method name
 * @a: ID
 * @size: Id
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
void print_diagsums(int *a, int size)
{
	int i, s = 0, d = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		d += a[size - i - 1];
		a += size;
	}
		printf("%d, ", s);
		printf("%d\n", d);
}

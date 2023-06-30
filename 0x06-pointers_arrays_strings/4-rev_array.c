#include "main.h"

/**
 * reverse_array - writes the char c to stdout
 *
 * @a: var for alx
 * @n: var for alx
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j++)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}

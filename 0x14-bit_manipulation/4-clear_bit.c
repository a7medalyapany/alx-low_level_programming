#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index.
 * @n: A pointer to the number whose bit needs to be set.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = (*n & ~mask);
	return (1);
}

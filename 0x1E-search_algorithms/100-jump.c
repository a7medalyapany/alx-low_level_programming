#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value  using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: first index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t step = sqrt(size);
	size_t prev = 0;
	size_t i = 0;

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		prev = i;
		i += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);

	if (i >= size)
		i = size - 1;

	for (; prev <= i; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

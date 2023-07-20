#include <stdio.h>
#include "main.h"

/**
 * int_index - searches for an integer in an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function used to compare values
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && cmp)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);
}

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
	return (elem == 98);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 * If malloc fails, the function terminates the process with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "malloc failed\n");
		exit(98);
	}

	return (ptr);
}


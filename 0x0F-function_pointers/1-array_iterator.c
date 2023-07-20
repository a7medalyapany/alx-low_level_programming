#include <stdio.h>
#include "main.h"

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to be executed on each element
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
   if (array && action)
    {
        for (size_t i = 0; i < size; i++)
        {
            action(array[i]);
        }
    }
}

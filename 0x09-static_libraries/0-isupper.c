#include "main.h"

/**
 * _isupper - method for ALX task
 * @c: ID for alx task
 *
 * Return: 1 if on success, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

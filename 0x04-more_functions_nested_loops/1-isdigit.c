#include "main.h"

/**
 * _isdigit - method for ALX task
 * @c: ID for alx task
 *
 * Return: 1 if on success, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

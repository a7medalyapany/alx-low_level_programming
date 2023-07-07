#include "main.h"

/**
* _abs - Alx task
* @c: the character to be checked
*
* Return: 1 if c is lowercase, 0 otherwise
*/

int _abs(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}

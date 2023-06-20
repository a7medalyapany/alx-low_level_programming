#include "main.h"

/**
* _isalpha - Alx task
* @c: the character to be checked
*
* Return: 1 if c is lowercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

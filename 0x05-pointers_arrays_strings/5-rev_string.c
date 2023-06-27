#include "main.h"

/**
 * rev_string - method for ALX task
 * @s: ID for alx task
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int i, j;
	char t;

	for (i = 0; s[i] != '\0'; ++i)
		;
	for (j = 0; j < i / 2; j++)
	{	
		t = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j];
	}
}

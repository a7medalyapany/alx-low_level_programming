#include "main.h"

/**
 * rev_string - method for ALX task
 * @s: ID for alx task
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	char rs[strlen(*s)];
	int i;
	int j;

	for (i = strlen(*s); i >= 0; i--)
	{
		j = 0;
		rs[j] = *s[i];
		j++;
	}
}

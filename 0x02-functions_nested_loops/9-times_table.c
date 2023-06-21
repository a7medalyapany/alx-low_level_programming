#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints every minute of the day of Jack Bauer
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j !=9)
				printf("%d, ", (i * j));
			else
				printf("%d$", (i * j));
		}
		printf("\n");
	}
}

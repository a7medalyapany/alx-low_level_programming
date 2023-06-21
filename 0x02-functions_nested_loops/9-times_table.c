#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		printf("0");

		for (j = 1; j <= 9; j++)
		{
			int product = i * j;

			if (product < 10)
				printf(",   %d", product);
			else
				printf(",  %d", product);
		}

		printf("\n");
	}
}


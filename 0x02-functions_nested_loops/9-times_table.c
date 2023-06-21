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

		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (j == 0)
				printf("%d", product);
			else
				printf(",%2d", product);
		}

		printf("\n");
	}
}


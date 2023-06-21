#include <stdio.h>
#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column;

	for (row = 0; row <= 9; row++) 
	{
		for (column = 0; column <= 9; column++)
		{
			int result = row * column;

			printf("%2d, ", result);
		}
		printf("\n");
	}
}


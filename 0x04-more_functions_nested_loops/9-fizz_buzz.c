#include "main.h"
#include <stdio>

/**
 * FizzBuzz - method for ALX task
 *
 */
void FizzBuzz(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i / 3)
			printf("Fizz");
		else if (i / 5)
			printf("Buzz");
		else if ((i / 3) && (i / 5))
			printf("FizzBuzz");
		else
		{
			if (i == 100)
				printf("%d", i);
			else
				printf("%d ", i);
		}
	}
}

#include <stdio.h>

/**
 * print_message - Prints the desired message before main is executed.
 */
void print_message(void) __attr__((constructor));

/**
 * print_message - Prints the desired message before main is executed.
 */
void print_message(void)
{
	  printf("You're beat! and yet, you must allow,\n"
			  "I bore my house upon my back!\n");
}

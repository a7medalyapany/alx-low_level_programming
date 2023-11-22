#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-ln arguments
 * @argv: Array of command-ln arguments
 *
 * Return: 0 (Always success)
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

	printf("%d\n", count);
	return (0);
}

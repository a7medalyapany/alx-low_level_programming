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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

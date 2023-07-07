#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 (Always success)
 */
int main(int argc, char *argv[])
{
	int count = argc - 1;

	printf("%d\n", count);
	return (0);
}

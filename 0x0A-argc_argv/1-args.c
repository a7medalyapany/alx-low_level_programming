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
	int count = 0;
	
	while (argv[count])
		count++;

	printf("%d\n", count - 1);
	return (0);
}

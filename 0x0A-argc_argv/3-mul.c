#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc : int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	int n1 = atoi(argc[1]);
	int n2 = atoi(argv[2]);
	int r = n1 * n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", r);
	return (0);
}

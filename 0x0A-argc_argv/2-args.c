#include <stdio.h>

/**
 * main - function
 * @argc : int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
	for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

#include <stadio.h>

/**
* print_alphabet_x10 - prints the lowercase alphabet
*/

void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}

	_putchar('\n');
}

/**
* main - Entry point
*
* Description: ALX tasks
*
* Return: Always 0 (Success)
*/

int main(void)
{
	print_alphabet_x10();
	return (0);
}

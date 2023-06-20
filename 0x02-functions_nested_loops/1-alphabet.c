#include <stadio.h>

/**
* print_alphabet - prints the lowercase alphabet
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);

	putchar('\n');
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
	print_alphabet();
	return (0);
}

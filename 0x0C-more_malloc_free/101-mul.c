#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply_numbers(char *num1, char *num2);
int is_positive_number(char *num);
void print_error_and_exit(void);
int string_to_int(char *str);

int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error_and_exit();

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
		print_error_and_exit();

	int result = multiply_numbers(argv[1], argv[2]);
	printf("%d\n", result);

	return (0);
}

int multiply_numbers(char *num1, char *num2)
{
	int n1 = string_to_int(num1);
	int n2 = string_to_int(num2);

	return (n1 * n2);
}

int is_positive_number(char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
			return (0);
		num++;
	}

	return (1);
}

void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}

int string_to_int(char *str)
{
	int result = 0;
	while (*str)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result);
}

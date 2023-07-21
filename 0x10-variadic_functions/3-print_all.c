#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything based on the provided format.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr = format;
	char c;
	int i;
	double f;
	char *s;

	va_start(args, format);
	while (ptr && *ptr)
	{
		c = *ptr;
		if (c == 'c')
			printf("%c", va_arg(args, int));
		else if (c == 'i')
			printf("%d", va_arg(args, int));
		else if (c == 'f')
			printf("%f", va_arg(args, double));
		else if (c == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
				s = "(nil)";
			printf("%s", s);
		}

		ptr++;

		if (*ptr && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
		printf(", ");
	}

	printf("\n");
	va_end(args);
}


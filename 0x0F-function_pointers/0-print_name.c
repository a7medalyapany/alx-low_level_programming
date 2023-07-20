#include <stdio.h>

/**
 * print_name - prints a name using a given function pointer
 * @name: name of the person
 * @f: pointer to a function that takes a char* and returns void
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
    f(name);
}

#include "main.h"

/**
 * _sqrt_recursion - fn
 * @n: Id
 * @guess: ID
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int sqrt_helper(int n, int guess);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_helper(n, n / 2));
}

/**
 * sqrt_helper - fn
 * @n: Id
 * @guess: Id
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (sqrt_helper(n, guess - 1));
	else
		return (sqrt_helper(n, guess + 1));
}

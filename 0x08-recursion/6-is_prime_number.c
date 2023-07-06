#include "main.h"

/**
 * is_prime_number - fn
 * @n: Id
 * @g: ID
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int is_prime_helper(int n, int g);
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (is_prime_helper(n, 2));
}
/**
 * is_prime_helper - fn
 * @n: Id
 * @g: Id
 *
 * Return: on success 1.
 *         on error -1 is returned, and errno is set appropriately.
 */
int is_prime_helper(int n, int g)
{
	if (g * g > n)
		return (1);
	if (n % g == 0)
		return (0);
	return (is_prime_helper(n, g + 1));
}

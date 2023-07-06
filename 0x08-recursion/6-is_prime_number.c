#include "main.h"

/**
 * is_prime_helper - recursive helper function for is_prime_number
 * @n: number to check for primality
 * @g: current divisor guess
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int g);

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - recursive helper function for checking primality
 * @n: number to check for primality
 * @g: current divisor guess
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int g)
{
	if (g * g > n)
		return (1);
	if (n % g == 0)
		return (0);
	return (is_prime_helper(n, g + 1));
}


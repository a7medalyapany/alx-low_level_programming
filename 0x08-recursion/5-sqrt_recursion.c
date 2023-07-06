#include "main.h"

/**
 * sqrt_helper - recursive helper function for _sqrt_recursion
 * @n: number to calculate the square root of
 * @guess: current guess for the square root
 *
 * Return: square root of n, or -1 if no exact square root exists
 */
int sqrt_helper(int n, int guess);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: square root of n, or -1 if n is negative
 */
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
 * sqrt_helper - recursive helper function for calculating square root
 * @n: number to calculate the square root of
 * @guess: current guess for the square root
 *
 * Return: square root of n, or -1 if no exact square root exists
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


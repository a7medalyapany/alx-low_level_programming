#include <stdbool.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The input string to check.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: true if the string is a palindrome, false otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}


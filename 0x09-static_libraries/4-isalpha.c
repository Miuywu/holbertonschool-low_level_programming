#include "holberton.h"

/**
 * _isalpha - checks for lowercase
 *
 * Return: 1 if c is lowercase, 0 otherwise
 * @c: input letter
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

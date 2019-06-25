#include "holberton.h"

/**
 * print_sign - checks and prints sign of n
 *
 * Return: 1 if c is lowercase, 0 otherwise
 * @n: input number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

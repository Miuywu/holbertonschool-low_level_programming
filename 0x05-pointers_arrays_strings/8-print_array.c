#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 *
 * Return: null
 * @a: array
 * @n: array size
 */
void print_array(int *a, int n)
{
	int c = 0;

	while (c <= n - 1)
	{
		printf("%d", a[c]);
		if (c != n - 1)
		{
			printf(", ");
		}
			c++;
	}
	printf("\n");
}

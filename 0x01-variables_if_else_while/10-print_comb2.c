#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - prints 0-9 with comma and space after
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			putchar (i);
			putchar (j);
			if (i != 57 || j != 57)
			{
				putchar (44);
				putchar (32);
			}
		}
	}
	putchar ('\n');
	return (0);
}

#include "main.h"

/**
 * print_binary - print the binary of a number
 * @n: integer
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int tzero = 0, i;
	unsigned long int x;

	for (i = 23; i >= 0; i--)
	{
		x = (n >> i) & 1;
		if (x == 1)
			tzero = 1;
		if (tzero == 1)
			_putchar(x + '0');
	}
	if (n == 0)
		_putchar('0');
}

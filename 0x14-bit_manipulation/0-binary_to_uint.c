#include "main.h"

/**
 * power - raises base to the power of exp
 * @base: base
 * @exp: exponent
 * Return: result
 */

int power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to base 2 binary num
 * Return: 0 or unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int x = 0, len;
	unsigned int dec, res = 0;

	while (b[x])
	{
		if (b[x] > '1' || b[x] < '0')
			return (0);

		len = strlen(b) - x - 1;

		dec = (b[x] - '0') * power(2, len);

		res += dec;

		x++;
	}

	return (res);
}

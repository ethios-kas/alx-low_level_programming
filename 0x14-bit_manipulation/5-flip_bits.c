#include "main.h"

/**
 * flip_bits - it will returns the number of bits to flip number to another
 * @n: first long integer
 * @m: second long integer
 * Return: needed number of bits to change (integer)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int inc;
	unsigned long int kr;

	inc = 0;
	kr = n ^ m;
	while (kr)
	{
		inc += kr & 1;
		kr = kr >> 1;
	}
	return (inc);
}

#include "main.h"

/**
 * get_bit - its the value of a bit at a given index
 * @n: this is a decimal parameter
 * @index: it is an index
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}

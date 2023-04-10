#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - this will set the value of a bit to 0
 * @n: the set parameter
 * @index: the disclosed index
 * Return: 1 if it will work,
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}

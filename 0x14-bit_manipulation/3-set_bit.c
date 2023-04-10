#include "main.h"
#include <stdlib.h>

/**
 * set_bit - this is what will set the value of a bit to 1
 * @n: these are the set parameter
 * @index: its what will be index
 * Return: this will be val
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}

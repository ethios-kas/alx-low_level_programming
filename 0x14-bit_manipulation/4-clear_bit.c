#include "main.h"

/**
 * clear_bit - clears the value of a bit to 0 at the give index
 * @n: pointeer to the value n
 * @index: index cue for the base2
 * Return: 1 when successful and -1 upon fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n = *n & (~(1 << index));

	return (1);
}

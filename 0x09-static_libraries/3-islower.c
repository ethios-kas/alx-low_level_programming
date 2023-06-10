#include "main.h"
/**
 * _islower - check for lower case
 *  @c: return charach=ter check
 *  Return: 1 ro 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

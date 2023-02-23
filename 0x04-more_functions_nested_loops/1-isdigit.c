#include "main.h"

/**
 * _isdigit - it identifies whether a digit between 0 and 9 has been inputed
 * @c: character input
 * Return: digits will return 1
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

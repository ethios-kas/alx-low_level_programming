#include "main.h"

/**
 * _isupper - it dentifies whether an uppercase was inserted
 * @c: character input 
 * Return: uppercase will return 1 and 0 will return lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

#include "main.h"
/**
 * _isalpha - checks for alphabet
 * @c: the char tp be checked
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 98) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

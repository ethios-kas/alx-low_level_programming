#include "main.h"

/**
 * _memset - will fill the first n bytes pointed by s
 * @s: pointer designats address
 * @b: constant byte
 * @n: bytes of memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

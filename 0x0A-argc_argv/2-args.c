#include "main.h"
#include <stdio.h>

/**
 * main - enter
 * @argc: argumenxzt counter
 * @argv: argument ccxvector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

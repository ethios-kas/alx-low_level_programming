#include <stdio.h>
/**
 * main - entry
 * Return: fruits of mylabour
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar (d);
	if (d != '9')
	{
	putchar (',');
	putchar (' ');
	}
	}
	putchar ('\n');
	return (0);
}

#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{

	int b, count = 0;

	unsigned long int current;

	for (b = 63; b >= 0; b--)
	{
		current = n >> b;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

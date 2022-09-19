#include "main.h"

/**
 * puts2 - main function.
 * @str: Pointer, the string to print.
 *
 * Description: This function prints every other character of a string
 * (divisible by two)
 * Return: none.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
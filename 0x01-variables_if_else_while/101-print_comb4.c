#include <stdio.h>



/**
 *
 * * main - Lanzador.
 *
 * *
 *
 * * Return: Always 0.
 *
 * */



int main(void)

{

	int ch;

	int n;

	int b;

	for (ch = 48; ch <= 57; ch++)

	{

		for (n = 49; n <= 57; n++)

		{

			for (b = 50; b <=57; b++)

			{

				if ((n > ch) && (b > n) )

				{

					putchar(ch);

					putchar(n);

					putchar(b);

					if (ch != 55 || n != 56 || b != 57)

					{

						putchar(44);

						putchar(32);

					}

				}

			}

		}

	}

	putchar('\n');

	return (0);

}



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

int a = 0;

int b;



while (a <= 99)

{

	b = a;

	while (b <= 99)

	{

		if (b != a)

		{

			putchar((a / 10) + 48);

			putchar((a % 10) + 48);

			putchar(' ');

			putchar((b / 10) + 48);

			putchar((b % 10) + 48);



			if (a != 98 || b != 98)

			{

				putchar(44);

				putchar(32);

			}

		}

		++b;

	}

	++a;

}

putchar('\n');

return (0);

}



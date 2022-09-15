#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check description
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: A input integer
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}

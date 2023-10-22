#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print for n to 98
 * @n: first value
 *
 * Description: same
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		do
		{
			printf("%d, ", n);
			n++;
		} while (n < 98);
	}
	else if (n > 98)
	{
		do
		{
			printf("%d, ", n);
			n--;
		} while (n > 98);
	}
	if (n == 98)
		printf("98");
	printf("\n");
}

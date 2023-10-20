#include "main.h"

/**
 * print_diagonal - prints n * '_'
 * @n: input
 *
 * Description: same
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;

	i = 0;

	if (n >= 0)
	{
		while (i < n)
		{
			_putchar(' ');
		} i++;
		if (n == i)
			_putchar('\\');
	}
		_putchar('\n');
	
}

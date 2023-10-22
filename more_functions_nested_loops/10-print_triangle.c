#include "main.h"

/**
 * print_triangle - prints a triangle with '#'
 * @size: input
 *
 * Description: same
 * Return: nothing since void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= (size - i); j++)
				_putchar(' ');
			for (k = 0; k <= i; k++)
			_putchar('#');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

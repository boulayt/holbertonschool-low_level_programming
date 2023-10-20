#include "main.h"

/**
 * print_square - prints n * '_'
 * @size: input
 *
 * Description: same
 * Return: 0
 */
void print_square(int size)
{
	int i;

	for (; size > 0; size--)
	{
		for (i = 0; i < size; i++)
			_putchar('#');
	_putchar('\n');
	}
}

#include "main.h"

/**
 * print_line - prints n * '_'
 * @n: input
 *
 * Description: same
 * Return: 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

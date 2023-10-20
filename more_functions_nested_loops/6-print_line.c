#include "main.h"

/**
 * print_lines - prints n * '_'
 *
 * Description: same
 * Return: 0
 */
void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

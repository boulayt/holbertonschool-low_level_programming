#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Description: same
 * Return: nothing
 */
void print_numbers(void)
{
	char c;

	if (c >= 48 && c <= 57)
	{
		_puthcar(c);
		_putchar('\n');
	}
	else
		return (0);
}

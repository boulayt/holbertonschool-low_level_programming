#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Description: with a newline
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (c = 97; c <= 122; c++)
			_putchar(c);
	_putchar('\n');
	}
}

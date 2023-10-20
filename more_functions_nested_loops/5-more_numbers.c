#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Description: same
 * Return: nothing since void
 */
void more_numbers(void)
{

	int a, i, j;

	for (a = 0; a < 10; a++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (j = 0; j < 5; j++)
		{
			_putchar('1');
			_putchar('0' + j);
		}
	_putchar('\n');
	}
}

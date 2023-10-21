#include "main.h"

/**
 * fizz_buzz - prints n times char unless it multiples by 3 or 5
 * @n: input
 *
 * Description: if (n % 3) = 0 -> prints 'Fizz'
 * if (n % 5) = 0 -> prints 'Buzz'
 * if both are true -> prints 'FizzBuzz'
 * else -> prints n
 * Return: nothing since void
 */
void fizz_buzz(void)
{
	char i;

	for (i = 1; i < 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) != 0))
		{
			_putchar('F');
			_putchar('0' + 'i');
			_putchar('0' + 'z');
			_putchar('0' + 'z');
		}
		if (((i % 5) == 0) && ((i % 3) != 0))
		{
			_putchar('0' + 'B');
			_putchar('0' + 'u');
			_putchar('0' + 'z');
			_putchar('0' + 'z');
		}
		else if (((i % 3) == 0) && ((i % 5) == 0))
		{
			_putchar('0' + 'F');
			_putchar('0' + 'i');
			_putchar('0' + 'z');
			_putchar('0' + 'z');
			_putchar('0' + 'B');
			_putchar('0' + 'u');
			_putchar('0' + 'z');
			_putchar('0' + 'z');
		}
		_putchar(' ');
		else
		{
			if (i < 10)
			{
				_putchar(i);
				i++;
			}
			if (i < 100 && i > 10)
			{
				_putchar('0' + (i / 10));
				_putchar('0' + (i % 10));
				i++;
			}
		_putchar(' ');
		}
	_putchar('\n');
			
}
	

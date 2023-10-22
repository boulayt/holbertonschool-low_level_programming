#include <stdio.h>

/**
 * main - prints n times char unless it multiples by 3 or 5
 *
 * Description: if (n % 3) = 0 -> prints 'Fizz'
 * if (n % 5) = 0 -> prints 'Buzz'
 * if both are true -> prints 'FizzBuzz'
 * else -> prints n
 * Return: nothing since void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 3))
			printf("Fizz");
		if (!(i % 5))
			printf("Buzz");
		else if ((i % 3) && (i % 5))
			printf("%d", i);
		printf(" ");
	}
	printf ("\n");
	
	return (0);
}

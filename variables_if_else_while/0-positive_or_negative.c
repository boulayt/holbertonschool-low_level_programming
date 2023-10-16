#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - picks a random number
 *
 * if the number is positive prints "%d is positive"
 * if the number is negative prints "%d is negative"
 * if the number equals 0 prints "%d is zero"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

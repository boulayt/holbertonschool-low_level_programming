#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet
 *
 * Description: prints alphabet
 * Return: 0 when done
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
		putchar(i);
	putchar('\n');

	return (0);
}

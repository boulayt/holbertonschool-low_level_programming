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
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

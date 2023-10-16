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

	for (c = 97; c <= 122; c++)
		putchar(c);
	for (c = 65; c <= 90; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

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

	for (c = 122; c >= 97; c--)
		putchar(c);
	putchar('\n');
	return (0);
}

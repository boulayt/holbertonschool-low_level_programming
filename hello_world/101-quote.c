#include <stdio.h>
#include <unistd.h>

/**
 * main - prints a sentence
 *
 * Return: 1 if everything works
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 62);
	return (1);
}

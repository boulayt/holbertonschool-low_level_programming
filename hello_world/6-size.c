#include <stdio.h>

/**
 * main - prints the size of varous types
 *
 * Return: 0 if printf works
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\nSize of a float: %dbyte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
    return (0);
}

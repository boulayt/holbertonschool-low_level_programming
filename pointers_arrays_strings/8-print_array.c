#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_array - print every value of an array
 * @a: adress of value from array
 * @n: number of times printed
 * Description: same
 */
void print_array(int *a, int n)
{
	while (n > 0)
	{
		printf("%d", *a);
		a++;
		n--;
		if (n != 0)
			printf(", ");
	}
	printf("\n");
}

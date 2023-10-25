#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *_atoi - converts a string into an int
 * @s: string input
 * Description: same
 * Return: value
 */
int _atoi(char *s)
{
	int i, sign, value;

	i = 0;
	sign = 1;
	value = 0;


	while (s[i] != '\0')
	{
		if (s[i] == ' ')
			i++;
		if (s[i] == '+')
			i++;
		if (s[i] == '-')
			i++;
		if (s[i - 1] == '-')
			sign = -1;
		if (s[i] <= '9' && s[i] >= '0')
		{
			value = (10 * value) + (s[i] - '0');
			i++;
		}
		else
			i++;
	}

	return (sign * value);
}

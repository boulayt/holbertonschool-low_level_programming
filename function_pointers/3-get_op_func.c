#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 *
 */

int (*get_op_func(char *s)(int, int))
{
	op_t ops[] =
	{
        	{"+", op_add},
	        {"-", op_sub},
	       	{"*", op_mul},
        	{"/", op_div},
        	{"%", op_mod},
        	{NULL, NULL}
	};

	int i;

    	for (i = 0; i < 5; i++)
    	{
	    if (ops)
		    return (ops);
	}

	return (0);
}

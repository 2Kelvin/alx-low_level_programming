#include "3-calc.h"

/**
  * get_op_func - select correct function
  * @s: operator
  * Return: pointer function
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	/* looping thro ops object members to identify operator */
	/* then pick the appropriate function */
	while (ops[i].op)
	{
		/* if the s operator passed thro args matches */
		/* operator in ops object, return its function */
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	/* else if operator s doesn't match, return null */
	return (NULL);
}

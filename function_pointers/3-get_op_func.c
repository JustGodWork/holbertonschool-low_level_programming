#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * @s: operator passed as argument
 * Return: pointer to the function
 * that corresponds to the operator
 * given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		/* op_add is the name of the function */
		{"+", op_add},
		/* op_sub is the name of the function */
		{"-", op_sub},
		/* op_mul is the name of the function */
		{"*", op_mul},
		/* op_div is the name of the function */
		{"/", op_div},
		/* op_mod is the name of the function */
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	/* if the string is not 1 char long */
	if (strlen(s) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	/* while element of the struct exist */
	while (ops[i].op != NULL)
	{
		/* if the operator argument matches */
		/* the first element of the struct */
		if (ops[i].op[0] == s[0])
			/* return the function */
			/* associated with the operator */
			return (ops[i].f);
		i++;
	}

	return (NULL); /* if no operator matches, return NULL */
}

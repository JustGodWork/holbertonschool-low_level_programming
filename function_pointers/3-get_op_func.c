#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument
 *
 * Return: pointer to the function that corresponds to the operator given as a
 * parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, /* op_add is the name of the function */
		{"-", op_sub}, /* op_sub is the name of the function */
		{"*", op_mul}, /* op_mul is the name of the function */
		{"/", op_div}, /* op_div is the name of the function */
		{"%", op_mod}, /* op_mod is the name of the function */
		{NULL, NULL}
	};
	int i = 0;

	/* while element of the struct exist */
	while (ops[i].op != NULL)
	{
		/* if the operator argument matches the first element of the struct */
		if (ops[i].op[0] == s[0])
			return (ops[i].f); /* return the function associated with the operator */
		i++;
	}

	return (NULL); /* if no operator matches, return NULL */
}

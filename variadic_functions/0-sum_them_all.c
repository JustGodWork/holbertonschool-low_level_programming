#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	/* initialize valist for n number of arguments */
	va_start(args, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	/* clean memory reserved for valist */
	va_end(args);

	return (sum);
}

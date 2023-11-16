#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	/* initialize valist for n number of arguments */
	va_start(args, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		/* get the next argument value */
		str = va_arg(args, char *);

		/* if the string is NULL, print (nil) */
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* if separator is not NULL and i is less than n - 1 */
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	/* clean memory reserved for valist */
	va_end(args);

	printf("\n");
}

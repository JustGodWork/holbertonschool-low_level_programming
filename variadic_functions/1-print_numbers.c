#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	/* initialize valist for n number of arguments */
	va_start(args, n);

	/* access all the arguments assigned to valist */
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	/* clean memory reserved for valist */
	va_end(args);

	printf("\n");
}

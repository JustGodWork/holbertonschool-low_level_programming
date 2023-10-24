#include <stdio.h>

/**
 * print_array - show array content
 * @a: Array to print
 * @n: Number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (a[index + 1])
			printf("%d, ", a[index]);
		else
			printf("%d\n", a[index]);
	}
}

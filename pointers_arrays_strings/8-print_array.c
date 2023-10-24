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

	if(n < 1)
		return;

	for (index = 0; index < n; index++)
	{
		if (index < (n - 1))
			printf("%d, ", a[index]);
		else
			printf("%d\n", a[index]);
	}
}
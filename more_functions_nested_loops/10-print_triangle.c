#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');
		for (k = 0; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}

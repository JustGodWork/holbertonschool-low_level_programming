#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to an int
 * @b: pointer to an int
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap_int = *a;

	*a = *b;
	*b = swap_int;
}

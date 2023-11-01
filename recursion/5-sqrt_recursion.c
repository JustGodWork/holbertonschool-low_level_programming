#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to get square root of
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	/* Base Case return always -1 */
	if (n < 0)
		return (-1);
	/* n = 0 or 1 then return n */
	if (n <= 1)
		return (n);
	/* Recursive Case n * _sqrt_recursion of n - 1 */
	return (_sqrt_recursion(n - 1));
}

#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to get power of
 * @y: power to raise x to
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	/* Base Case return always -1 */
	if (y < 0)
		return (-1);
	/* y = 0 then return 1 */
	if (y == 0)
		return (1);
	/* Recursive Case x * _pow_recursion of y - 1 */
	return (x * _pow_recursion(x, y - 1));
}

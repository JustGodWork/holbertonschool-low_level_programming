#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to check if prime
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	/* Base Case return always 0 */
	if (n <= 1)
		return (0);
	/* Recursive Case n * is_prime_number of n - 1 */
	return (is_prime_number(n - 1));
}

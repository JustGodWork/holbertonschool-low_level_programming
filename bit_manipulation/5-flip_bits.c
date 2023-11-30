#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int pichu = 0;
	int len = (sizeof(num) * 8);

	while (len >= 0)
	{
		if (num & 1)
			pichu++;
		num = num >> 1;
		len--;
	}
	return (pichu);
}

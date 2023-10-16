#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 * Description: 'Last digit'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is greater than 5\n", n);
	};

	if (lastDigit == 0)
	{
		printf("Last digit of %d is 0\n", n);
	};

	if (lastDigit < 6 && lastDigit != 0)
	{
		printf("Last digit of %d is less than 6 and not 0\n", n);
	};

	return (0);
}

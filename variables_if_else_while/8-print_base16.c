#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Base16'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexDigit = '0';

	while (hexDigit <= '9')
	{
		putchar(hexDigit);
		hexDigit++;
	};

	hexDigit = 'a';

	while (hexDigit <= 'f')
	{
		putchar(hexDigit);
		hexDigit++;
	};

	putchar('\n');

	return (0);
}

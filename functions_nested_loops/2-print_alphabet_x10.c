#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Description: 'print the alphabet in lowercase 10 times'
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

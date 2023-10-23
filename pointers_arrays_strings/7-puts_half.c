#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}

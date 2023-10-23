#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, index;
	char tmp;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (index = 0; index < len; index++)
	{
		tmp = *(s + index);
		*(s + index) = *(s + len - 1);
		*(s + len - 1) = tmp;
		len--;
	}
}

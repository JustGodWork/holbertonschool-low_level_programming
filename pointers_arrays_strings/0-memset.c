#include "main.h"

/**
 * _memset - Fill memory with a constant byte.
 * @s:  String to fill
 * @b: Byte used to fill @s
 * @n: Number of bytes to fill
 * Return: char*
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (s[i] && i < (int)n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

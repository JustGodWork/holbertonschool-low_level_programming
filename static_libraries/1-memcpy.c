#include "main.h"

/**
 * _memcpy - Copy memory area.
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < (int)n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

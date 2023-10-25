#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i))
		i++;

	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}

	return (dest);
}

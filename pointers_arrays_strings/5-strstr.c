#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, len = 0;

	for (i = 0; needle[i] != '\0'; i++)
		len++;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; j < len; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (j == len)
				return (haystack + i);
		}
	}
	return ('\0');
}

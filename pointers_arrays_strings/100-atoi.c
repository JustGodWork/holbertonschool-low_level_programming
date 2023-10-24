#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0, j = 0, n = 0, m = 1;

	while (s[i] != '\0')
	{
		if (j > 0 && (s[i] < '0' || s[i] > '9'))
			break;
		if (s[i] == '-')
			m *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (j > 0)
				n *= 10;
			n += (s[i] - '0');
			j++;
		}
		i++;
	}

	return (n * m);
}

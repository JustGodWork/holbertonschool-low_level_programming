#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be measured
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	/* if string (s) pointer is char (NULL) */
	/* return (0) */
	if (*s == '\0')
		return (0);

	/* call _strlen_recursion function with */
	/* incremented pointer (s + 1) */
	/* to measure the next character in the string */
	return (1 + _strlen_recursion(s + 1));
}


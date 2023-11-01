#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* if string (s) pointer is char (NULL)*/
	/* return (void) */
	if (*s == '\0')
		return;

	/* call _print_rev_recursion function with */
	/* incremented pointer (s + 1) */
	/* to print the next character in the string */
	_print_rev_recursion(s + 1);
	/* printf("Called _print_rev_recursion: (%c)\n", *s); */

	/* print the current character in the string */
	/* printf("Putchar time: (%c)\n", *s); */
	_putchar(*s);
}

#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

    /* if string (s) pointer is char (NULL) */
    /* return (void) */
    _putchar(*(s));

    /* if string (s) pointer is char (NULL) */
    /* return (void) */
    if (*(s + 1))
    {
        /* call _puts_recursion function with */
        /* incremented pointer (s + 1) */
        /* to print the next character in the string */
        s++;
        _puts_recursion(s);
        return;
    }

    _putchar('\n');

}

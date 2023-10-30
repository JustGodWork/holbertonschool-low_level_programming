#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

    _putchar(*(s));

    if (*(s + 1))
    {
        s++;
        _puts_recursion(s);
    }

}

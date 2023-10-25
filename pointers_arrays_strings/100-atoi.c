#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the integer value, or 0 if no conversion can be performed
 */
int _atoi(char *s)
{
	int result = 0;
    int sign = 1;

    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    while (*s) {
        char current_char = *s;
        if (current_char >= '0' && current_char <= '9') {
            result = result * 10 + (current_char - '0');
        } else {
            break;
        }
        s++;
    }

    return (result * sign);
}


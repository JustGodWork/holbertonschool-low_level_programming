#include <stdlib.h>
#include "main.h"

/**
 * cap_string - osef
 * Description: This function sucks
 * Return: char *
*/
char *cap_string(char *s)
{
    char separators[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\n', ' ', '\t', '\0'};
    int i = 0, b;

    while (s[i])
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            for (b = 0;  separators[b] != '\0'; b++)
            {
                /* todo start str */
                if (s[i - 1] == separators[b] || (i == 0 && b == 0))
                {
                    s[i] -= 32; /* Transform to caps*/
                    /* EZ Adonis */
                }
            }
        }
        i++;
    }

    return s;
}
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
    int flag = 0;

    while (mask > 0)
    {
        if ((n & mask) == 0 && flag == 0)
        {
            mask = mask >> 1;
            continue;
        }
        else
        {
            flag = 1;
            if ((n & mask) == 0)
                _putchar('0');
            else
                _putchar('1');
        }
        mask = mask >> 1;
    }

    if (flag == 0)
        _putchar('0');
}

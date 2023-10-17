#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * Description: 'Use function write to print _putchar, followed by a new line'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "_putchar\n";

	while (*c)
	{
		write(1, c, 1);
		c++;
	};
	return (0);
}

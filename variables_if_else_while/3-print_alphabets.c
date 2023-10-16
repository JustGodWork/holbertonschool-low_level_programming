#include <stdio.h>

/**
 * main - Entry point
 * Description: 'alphABET'
 * Return: Always 0 (Success)
 */
int main(void)
{
	char currentLetter = 'a';

	while (currentLetter <= 'z')
	{
		putchar(currentLetter);
		currentLetter++;
	};

	currentLetter = 'A';

	while (currentLetter <= 'Z')
	{
		putchar(currentLetter);
		currentLetter++;
	};

	putchar('\n');

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific
 * char
 * @size: size of array
 * @c: character to initialize array with
 *
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{

	/* Define array and set value to NULL */
	char *array = NULL;
	/* Define i as unsigned because size is unsigned too */
	unsigned int i;

	/* Skip if size is 0 */
	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);

}
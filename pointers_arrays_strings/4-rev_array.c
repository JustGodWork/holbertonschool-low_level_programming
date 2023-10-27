#include "main.h"

/**
 * reverse_array - I am a kind of paranoid in reverse.
 * @a Array to reverse
 * @n Array length
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i, tmp;
	const int last_index = n - 1; /* Save array last index to variable */

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[last_index - i]; /* Save current last array value to tmp variable */
		a[last_index - i] = a[i]; /* Set current last array value to current array index value */
		a[i] = tmp; /* Set current array index value to tmp value */
	}
}

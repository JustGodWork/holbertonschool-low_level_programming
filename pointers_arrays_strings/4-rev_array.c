#include "main.h"

/**
 * reverse_array - I am a kind of paranoid in reverse.
 * @a: Array to reverse
 * @n: Array length
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i, tmp;
	/* Save array last index to variable */
	const int last_index = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		/* Save current last array value to tmp variable */
		tmp = a[last_index - i];
		/* Set current last array value to current array index value */
		a[last_index - i] = a[i];
		/* Set current array index value to tmp value */
		a[i] = tmp;
	}
}

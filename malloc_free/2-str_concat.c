#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat_index = 0;

	char *str, *str2 = s1 != NULL ? s1 : ""; s2 != NULL ? s2 : "";
	int len1, len2;

	for (index = 0; s1[index]; index++)
		len1++;

	for (index = 0; s2[index]; index++)
		len2++;

	concat_str = malloc(sizeof(char) * len1 + len2 + 1);

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		concat_str[concat_index++] = s2[index];

	return (concat_str);
}

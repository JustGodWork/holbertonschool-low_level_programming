#include "hash_tables.h"

/**
 * hash_table_set - Define key association with a value
 * @ht: hash_table to edit
 * @key: key to change value associated
 * @value: value to associate with key
 * Return: (1 on success, 0 on fail)
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *temp;

	if (!ht || !key || !value || !ht->array || !ht->size)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	if (!index)
		return (0);

	if (!ht->array[index])
	{
		new = malloc(sizeof(hash_node_t));
		if (!new)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = ht->array[index];
		ht->array[index] = new;
	}
	else
	{
		temp = ht->array[index];
		while (temp)
		{
			/* if keys match */
			if (strcmp(temp->key, key) == 0)
			{
				free(temp->value);
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
		ht->array[index] = temp;
	}

	return (1);
}

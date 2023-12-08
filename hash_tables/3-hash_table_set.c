#include "hash_tables.h"

/**
 * edit_node - Edit a node
 * @node: pointer of node to edit
 * @key: key to manage
 * @value: value to set related to the key
 * Return: pointer to the edited node
*/
hash_node_t *edit_node(
	hash_node_t *node,
	const char *key,
	const char *value
)
{
	if (!value)
		return (NULL);

	printf("Editing value: %s to %s\n", node->value, value);
	if (key)
		node->key = strdup(key);
	node->value = strdup(value);

	return (node);
}

/**
 * create_node - Create an new node
 * @key: key to set
 * @value: value to set
 * Return: Pointer to created node
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t *));

	printf("Node is valid: %s\n", new ? "true" : "false");
	if (!new || !edit_node(new, key, value))
		return (NULL);
	return (new);
}

int node_add(
	hash_table_t *ht,
	const char *key,
	const char *value,
	unsigned long index
)
{
	hash_node_t *new = create_node(key, value);

	printf("Creating node at index %lu\n", index);
	if (!new)
		return (0);
	ht->array[index] = new;
	return (1);
}

int node_set(
	hash_table_t *ht,
	const char *key,
	const char *value,
	unsigned long index
)
{
	unsigned int i;
	hash_node_t *new;

	if (ht->array[index]->key == key)
	{
		printf("Updating node at index %lu\n", index);
		if (!edit_node(ht->array[index], NULL, value))
			return (0);
	}
	else
		for (i = 0; i < ht->size; i++)
			if (!ht->array[i])
			{
				new = create_node(key, value);
				if (!new)
					return (0);
				ht->array[index] = new;
				break;
			}

	return (1);
}

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

	printf("Init vars\n");

	if (!ht || !key || !value || !ht->array || !ht->size)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	printf("Getting index %lu\n", index);

	if (!index)
		return (0);

	if (!ht->array[index])
	{
		if (!node_add(ht, key, value, index))
			return (0);
	}
	else
		if (!node_set(ht, key, value, index))
			return (0);

	return (1);
}

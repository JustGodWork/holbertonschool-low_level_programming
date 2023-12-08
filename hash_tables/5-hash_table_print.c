#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *sep = "";

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}

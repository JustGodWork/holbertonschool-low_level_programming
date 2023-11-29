#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 * Return: the address of the new node, or NULL if it failed
 *         if it is not possible to add the new node at index idx,
 *         do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t num_nodes = 0;
	dlistint_t *new_node, *current_node;

	num_nodes = dlistint_len(*h);

	if (idx > num_nodes)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == num_nodes)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	current_node = *h;

	while (idx > 1)
	{
		current_node = current_node->next;
		idx--;
	}

	new_node->next = current_node->next;
	new_node->prev = current_node;
	current_node->next->prev = new_node;
	current_node->next = new_node;

	if (dlistint_len(*h) == num_nodes + 1)
		return (new_node);

	return (NULL);
}

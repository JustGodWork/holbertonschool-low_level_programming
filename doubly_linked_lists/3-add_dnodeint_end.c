#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	size_t num_nodes = 0;
	dlistint_t *new_node, *last_node;

	num_nodes = dlistint_len(*head);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}

	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
		new_node->prev = last_node;
	}

	if (dlistint_len(*head) == num_nodes + 1)
		return (new_node);

	return (NULL);
}

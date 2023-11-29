#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: integer to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	size_t num_nodes = 0;
	dlistint_t *new_node;

	num_nodes = dlistint_len(*head);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}

	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}

	if (dlistint_len(*head) == num_nodes + 1)
		return (new_node);

	return (NULL);
}

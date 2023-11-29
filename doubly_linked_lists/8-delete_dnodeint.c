#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t num_nodes = 0;
	dlistint_t *current_node;

	num_nodes = dlistint_len(*head);

	if (index > num_nodes - 1)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	if (index == num_nodes - 1)
	{
		current_node = *head;
		while (current_node->next)
			current_node = current_node->next;
		current_node->prev->next = NULL;
		free(current_node);
		return (1);
	}

	current_node = *head;

	while (index > 0)
	{
		current_node = current_node->next;
		index--;
	}

	current_node->prev->next = current_node->next;
	current_node->next->prev = current_node->prev;
	free(current_node);

	return (1);
}

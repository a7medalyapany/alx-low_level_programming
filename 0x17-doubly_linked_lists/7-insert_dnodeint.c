#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *prev_node = NULL;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = current;
		if (current != NULL)
			current->prev = new_node;
		*head = new_node;
		return (new_node);
	}

	while (idx > 0)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		prev_node = current;
		current = current->next;
		idx--;
	}

	new_node->prev = prev_node;
	new_node->next = current;
	prev_node->next = new_node;
	if (current != NULL)
		current->prev = new_node;

	return (new_node);
}

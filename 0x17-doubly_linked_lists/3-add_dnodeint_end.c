#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: integer to store in new node
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *cur = *h, *new_node = malloc(sizeof(*new_node));
	unsigned int i = 0;

	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!cur && idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}

	while (cur)
	{
		if (i == idx)
		{
			new_node->prev = cur->prev;
			new_node->next = cur;
			cur->prev->next = new_node;
			cur->prev = new_node;
			return (new_node);
		}
		cur = cur->next;
		i++;
	}

	if (i == idx)
	{
		new_node->prev = cur->prev;
		new_node->next = cur;
		cur->prev->next = new_node;
		cur->prev = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}

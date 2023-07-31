#include "lists.h"

/**
 * insert_nodeint_at_index - insert at index
 * @head: for first node
 * @idx: indext for the node to be inserted
 * @n: data for the node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prev, *current, *newNode = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !newNode)
		return (NULL);
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	prev = NULL;
	current = *head;
	while (current != NULL)
	{
		if (i == idx)
		{
			prev->next = newNode;
			newNode->next = current;
			return (newNode);
		}
		prev = current;
		current = current->next;
		i++;
	}
	free(newNode);
	return (NULL);
}

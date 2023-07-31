#include "lists.h"

/**
 * pop_listint - pop a node
 * @head: ID
 * Return: Number of the node.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}

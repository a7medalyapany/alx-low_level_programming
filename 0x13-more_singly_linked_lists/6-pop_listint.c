#include "lists.h"

/**
 * pop_listint - pop a node
 * @head: ID
 * Return: Number of the node.
 */
int pop_listint(listint_t **head)
{
	listint_t *n;
	int i;

	if (!head || !*head)
		return (0);
	n = (*head)->next;
	i = (*head)->i;
	free(*head);
	*head = n;
	return (i);
}

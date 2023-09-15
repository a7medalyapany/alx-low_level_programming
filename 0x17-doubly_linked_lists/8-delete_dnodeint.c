#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 * Return: 1 if success, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		if (tmp->next)
			tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (index--)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp->next)
		tmp->next->prev = tmp->prev;
	tmp->prev->next = tmp->next;
	free(tmp);

	return (1);
}
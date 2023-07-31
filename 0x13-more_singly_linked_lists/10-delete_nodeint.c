#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at some index
 * @head: ID
 * @index: index of the deleted node
 * Return: 1 if its done or -1 if its not.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL, *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;

	while (current != NULL)
	{
		if (i == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		i++;
	}
	return (-1);
}

#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: Id
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	if (head == NULL || *head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

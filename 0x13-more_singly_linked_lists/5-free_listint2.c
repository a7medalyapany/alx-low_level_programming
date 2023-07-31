#include "lists.h"

/**
 * free_listint2 - check the code
 * @head: Id
 */
void free_listint2(listint_t **head)
{
	list_t *n, *t;

	if (head == NULL)
		return;
	n = *head;
	while (n == NULL)
	{
		t = n;
		n = n->next;
		free(t);
	}
	*head = NULL;
}

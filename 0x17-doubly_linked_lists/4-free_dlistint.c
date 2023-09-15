#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = head, *next;

	while (cur)
	{
		next = cur->next;
		free(cur);
		cur = next;
	}
}

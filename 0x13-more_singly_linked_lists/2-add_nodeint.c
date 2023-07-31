#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer of the head of the list.
 * @n: Integer to be added to the new node.
 *
 * Return: The address of the new element (new head), or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);
	newNode->next = NULL;
	newNode->n = n;

	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}

#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the pointer of the head of the list.
 * @n: Int to be added to the new node.
 *
 * Return: The address of the new element (new node at the end),
 *         or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *temp;

	if (!head || !newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (*head == NULL)
		*head = newNode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (newNode);
}

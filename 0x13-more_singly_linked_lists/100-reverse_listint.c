{
	listint_t *temp = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);
	temp = *head;
	*head = NULL;
	while (temp)
	{
		next = temp->next;
		temp->next = *head;
		*head = temp;
		temp = next;
	}
	return (*head);
}

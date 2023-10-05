#include "hashtable.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_table_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht;
	while (temp != NULL)
	{
		if (strcmp(temp->array[index]->key, key) == 0)
		{
			free(temp->array[index]->value);
			temp->array[index]->value = strdup(value);
			return (1);
		}
		temp = temp->array[index]->next;
	}
	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

#include "hashtable.h"

/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	if (key == NULL || size == 0)
		return (0);
	hash_value = hash_djb2(key);
	return (hash_value % size);
}

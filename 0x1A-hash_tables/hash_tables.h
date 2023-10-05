#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/* Libraries */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Structures */
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable.
 * @value: The value, string
 * @next: A pointer to the next node of the list
 * @index: The index of the array of the hash table
 * The hash table size is set in the main function
 * with the size of the array.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
	unsigned long int index;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the
 * first node of a linked list, because we want
 * our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/* Prototypes */
/* 0. Create a hash table */
hash_table_t *hash_table_create(unsigned long int size);
/* 1. Implement the djb2 algorithm */
unsigned long int hash_djb2(const unsigned char *str);
/* 2. Return the index of a key */
unsigned long int key_index(const unsigned char *key, unsigned long int size);
/* 3. Add an element to the hash table */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
/* 4. Retrieve a value associated with a key */
char *hash_table_get(const hash_table_t *ht, const char *key);
/* 5. Print a hash table */
void hash_table_print(const hash_table_t *ht);
/* 6. Delete a hash table */
void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLES_H */
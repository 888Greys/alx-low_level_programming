#ifndef HASH_TABLES
#define HASH_TABLES

#include <stdlib.h>

/**
* struct hash_node_s - Node of a hash table
*
* @key: A unique string identifier for the node
* @value: The corresponding value associated with the key
* @next: A pointer to the next node in the linked list
*/
typedef struct hash_node_s
{
char *key;
char *value;
struct hash_node_s *next;
} hash_node_t;

/**
* struct hash_table_s - Hash table data structure
*
* @size: The size of the hash table's array
* @array: An array of size @size, each cell points to
*the first node in a linked list
*        (Chaining collision handling is used)
*/
typedef struct hash_table_s
{
unsigned long int size;
hash_node_t **array;
} hash_table_t;

/**
* struct shash_node_s - Node of a sorted hash table
*
* @key: A unique string identifier for the node
* @value: The corresponding value associated with the key
* @next: A pointer to the next node in the linked list
* @sprev: A pointer to the previous element in the sorted linked list
* @snext: A pointer to the next element in the sorted linked list
*/
typedef struct shash_node_s
{
char *key;
char *value;
struct shash_node_s *next;
struct shash_node_s *sprev;
struct shash_node_s *snext;
} shash_node_t;

/**
* struct shash_table_s - Sorted hash table data structure
*
* @size: The size of the sorted hash table's array
* @array: An array of size @size, each cell points to the
*first node in a linked list
*        (Chaining collision handling is used)
* @shead: A pointer to the first element in the sorted linked list
* @stail: A pointer to the last element in the sorted linked list
*/
typedef struct shash_table_s
{
unsigned long int size;
shash_node_t **array;
shash_node_t *shead;
shash_node_t *stail;
} shash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/* Advanced Functions */
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* HASH_TABLES */


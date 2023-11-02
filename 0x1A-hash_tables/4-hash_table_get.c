#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieve the value associated
 *with a key from a hash table.
 * @ht: The hash table to search in.
 * @key: The key to look up in the hash table.
 *
 * Return: The value associated with the key, or
 *NULL if the key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;

if (!ht)
return (NULL);
node = ht->array[key_index((const unsigned char *)key, ht->size)];
for (; node; node = node->next)
if (strcmp(node->key, key) == 0)
return (node->value);
return (NULL);
}

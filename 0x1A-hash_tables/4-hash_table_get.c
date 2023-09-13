#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieves the value associated with a
 * specified key from a hash table.
 * @ht: The hash table from which to retrieve the value.
 * @key: The key to search for in the hash table.
 * Return: The value associated with the specified key,
 * or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *node;
if (!ht)
return (NULL);
node = ht->array[key_index((const unsigned char *)key, ht->size)];
for (; node; node = node->next)
{
if (strcmp(node->key, key) == 0)
return (node->value);
}

return (NULL);
}


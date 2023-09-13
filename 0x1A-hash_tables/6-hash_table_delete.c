#include "hash_tables.h"

/**
 * hash_table_delete - Frees the memory occupied
 * by all elements in a hashtable.
 * @ht: The hash table to be deleted.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *copy, *delete;

if (ht)
{
for (i = 0; i < ht->size; i++)
{
copy = ht->array[i];
while (copy)
{
delete = copy;
copy = copy->next;

/* Free the memory for the key, value, and the node itself.*/
free(delete->key);
free(delete->value);
free(delete);
}
}

/* Free the memory for the array and the hash table structure.*/
free(ht->array);
free(ht);
}
}

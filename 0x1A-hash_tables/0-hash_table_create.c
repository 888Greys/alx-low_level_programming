#include "hash_tables.h"
/**
 * hash_table_create - Creates a new hash table.
 *
 * @size: The size of the array for the hash table.
 *
 * Return: A pointer to the newly created hash table,
 * or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
/*
* Create a new hash table with an array of the given size.
* Initialize all elements of the array to NULL to indicate
* an empty table.
* Return a pointer to the newly created hash table.
* If memory allocation fails or size is zero, return NULL.
*/
hash_table_t *new_hash_table;

if (!size)
return (NULL);

new_hash_table = malloc(sizeof(hash_table_t));

if (!new_hash_table)
return (NULL);

new_hash_table->size = size;
new_hash_table->array = malloc(sizeof(hash_node_t *) * size);
if (!new_hash_table->array)
{
free(new_hash_table);
return (NULL);
}

/* Initialize each element of the array to NULL */
for (; size; size--)
new_hash_table->array[size - 1] = NULL;

return (new_hash_table);
}

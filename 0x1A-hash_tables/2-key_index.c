#include "hash_tables.h"

/**
 * key_index - Get the index of a key in a hash table.
 * @key: The key to find the index for.
 * @size: The size of the hash table's array.
 *
 * Return: The index of the key within the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}

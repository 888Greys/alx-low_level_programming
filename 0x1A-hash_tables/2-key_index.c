#include "hash_tables.h"
/**
 * key_index - Calculates the index of a key within a hash table's array.
 *
 * @key: The key (a string) for which the index is to be calculated.
 * @size: The size of the array in the hash table.
 *
 * Return: The index of the key within the hash table's array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
/*
* This function calculates the index in a hash table's array for a given
* key using the djb2 hash algorithm. It takes the key and the size of the
* array as inputs, computes the hash value using hash_djb2(key), and then
* calculates the index by taking the modulus of the hash value with the
* size of the array. The resulting index is returned.
*/
return (hash_djb2(key) % size);
}

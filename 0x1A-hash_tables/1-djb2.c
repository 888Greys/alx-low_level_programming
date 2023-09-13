#include "hash_tables.h"
/**
 * hash_djb2 - Implements the djb2 hash algorithm.
 *
 * @str: The input string (key) to be hashed.
 *
 * Return: The hash value generated using the djb2 algorithm.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
/*
* This function calculates a hash value for the given input string (key)
* using the djb2 hash algorithm. It iterates through the characters of the
* input string and computes the hash value incrementally. The final hash
* value is returned as an unsigned long int.
*/
unsigned long int hash = 5381;
int c;

while ((c = *str++))
hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

return (hash);
}


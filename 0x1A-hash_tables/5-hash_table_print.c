#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints all elements in a hash table.
 * @ht: The hash table to be printed.
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i, count = 0;
hash_node_t *copy;

if (ht != NULL)
{
putchar('{');
/* Print an opening curly brace to start the dictionary.*/
for (i = 0; i < ht->size; i++)
{
copy = ht->array[i];
for (; copy; copy = copy->next)
{
/* If this is not the first element, print a commaand a space.*/
if (count)
printf(", ");

/* Print the key and value in a 'key': 'value' format.*/
printf("'%s': '%s'", copy->key, copy->value);
count++;
}
}
printf("}\n");/* Print a closing curly brace and. */
}
}

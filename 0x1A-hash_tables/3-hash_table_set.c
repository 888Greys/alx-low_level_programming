#include "hash_tables.h"
#include <string.h>

/**
 * update_key - Updates the value of a key in a linked list
 * if the key exists.
 * @h: Pointer to the head of the linked list.
 * @key: The key to update.
 * @value: The new value to set.
 * Return: 1 if successful, 0 if no matching key is found, -1
 * if memory allocation fails.
 */
int update_key(hash_node_t **h, const char *key, const char *value)
{
hash_node_t *copy = *h;
char *value1;

for (; copy; copy = copy->next)
if (strcmp(copy->key, key) == 0)
{
value1 = strdup(value);
if (!value1)
return (-1);
free(copy->value);
copy->value = value1;
return (1);
}
return (0);
}

/**
 * add_node - Adds a new node to the beginning of a linked
 * list of hash_node_t.
 * @h: Pointer to the head of the linked list.
 * @key: The key of the new node.
 * @value: The value associated with the new node.
 * Return: The new head of the linked list.
 */
hash_node_t *add_node(hash_node_t **h, const char *key, const char *value)
{
hash_node_t *new_node;
char *key1, *value1;

new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (NULL);
key1 = strdup(key);
if (!key1)
{
free(new_node);
return (NULL);
}
value1 = strdup(value);
if (!value1)
{
free(new_node);
free(key1);
return (NULL);
}

new_node->key = key1;
new_node->value = value1;
new_node->next = *h;

*h = new_node;
return (*h);
}

/**
* hash_table_set - Adds or updates an element in the hash table.
* @ht: The hash table where the key-value pair will be added or updated.
* @key: The key (non-empty string) associated with the value.
* @value: The value to be associated with the key (must be duplicated).
* Return: 1 if the operation succeeds, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new;
int update;

if (!ht || strcmp(key, "") == 0)
return (0);

index = key_index((const unsigned char *)key, ht->size);

update = update_key(&(ht->array[index]), key, value);
/* update == 0 when no key was found */
if (update == 0)
{
new = add_node(&(ht->array[index]), key, value);
if (!new)
{
return (0);
}
ht->array[index] = new;
}
/* update == -1 when malloc failed */
else if (update == -1)
return (0);
return (1);
}

#include "lists.h"
/**
 * sum_dlistint - find sum of elements in the linkedlist
 * @head: header of linked list
 * Return: sum of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *next;
int sum = 0;
current = head;
while (current != NULL)
{
next = current->next;
sum += current->n;
current = next;
}
return (sum);
/*The code continuing workig*/
}

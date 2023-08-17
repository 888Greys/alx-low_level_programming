#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth number of node
 ** @head: header of linked list
 * @index: node index to return in the list
 * Return: node in the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current;
if (head == NULL)
return (0);
current = head;
while (index != 0)
{
current = current->next;
index--;
if (current == NULL)
return (0); /*Out of range*/
}
return (current);
/*Code works*/
}

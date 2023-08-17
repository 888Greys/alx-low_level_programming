#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a in the linked list
 * dlistint_t linked list
 *
 * @head: header  of the list
 * @index: index of the new node in the linked list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *hh1;
dlistint_t *hh2;
unsigned int i;
hhh1 = *head;
if (hh1 != NULL)
while (hh1->prev != NULL)
hh1 = hh1->prev;
i = 0;
while (hh1 != NULL)
{
if (i == index)
{
if (i == 0)
{
*head = hh1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
hh2->next = hh1->next;
if (hh1->next != NULL)
hh1->next->prev = hh2;
}
free(hh1);
return (1);
}
hh2 = hh1;
hh1 = hh1->next;
i++;
}
return (-1);
}

#include "lists.h"
/**
 * free_dlistint - it frees a listint_t list
 * @head: header of linked list
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
dlistint_t *next;
current = head;
while (current != NULL)
{
next = current->next;
free(current);
current = next;
}
/*The feeling when the codes work*/
}

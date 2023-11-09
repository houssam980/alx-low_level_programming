#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at index
* @head: pointer to pointer to head
* @index: index to delete
* Return: return -1 if Error
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *hd1;
dlistint_t *hd2;
unsigned int ctr;
hd1 = *head;
if (hd1 != NULL)
while (hd1->prev != NULL)
hd1 = hd1->prev;
ctr = 0;
while (hd1 != NULL)
{
if (ctr == index)
{
if (ctr == 0)
{
*head = hd1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
hd2->next = hd1->next;
if (hd1->next != NULL)
hd1->next->prev = hd2;
}
free(hd1);
return (1);
}
hd2 = hd1;
hd1 = hd1->next;
ctr++;
}
return (-1);
}

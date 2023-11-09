#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at index
* @head: pointer to pointer to head
* @index: index to delete
* Return: return -1 if Error
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *hd_1;
dlistint_t *hd_2;
int ctr;
hd_1 = *head;
if (hd_1 != NULL)
while (hd_1->prev != NULL)
hd_1 = hd_1->prev;
ctr = 0;
while (hd_1 != NULL)
{
if (ctr == index)
{
if (ctr == 0)
{
*head = hd_1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
hd_2->next = hd_1->next;
if (hd_1->next != NULL)
hd_1->next->prev = hd_2;
}
free(hd_1);
return (1);
}
hd_2 = hd_1;
hd_1 = hd_1->next;
ctr++;
}
return (-1);
}

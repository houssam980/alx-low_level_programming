#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a list at index
 * @head: pointer to head
 * @index: position
 * Return: return node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int lp;
lp = 0;
if (!head)
return (NULL);
while (head != NULL)
{
if (lp == index)
break;
lp++;
head = head->next;
}
return (head);
}

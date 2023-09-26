#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to the list
 * Return: nothing to return Void
 **/
void free_listint2(listint_t **head)
{
listint_t *nd, *tmpr;
if (!head)
return;
nd = *head;
while (nd)
{
free(actual_node);
tmpr = nd;
nd = nd->next;
 free(tmpr)
}
free(actual_node);
*head = NULL;
}

#include "lists.h"
/**
*add_dnodeint_end -add node at the end of a list
*@head: pointer to head
*@n: node to be add
*Return: address element or NULL.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *nw_nd, *l_list;
nw_nd = malloc(sizeof(dlistint_t));
if (nw_nd == NULL)
return (NULL);
nw_nd->n = n;
nw_nd->next = NULL;
l_list = *head;
if (*head == NULL)
{
nw_nd->next = *head;
*head = nw_nd;
}
else
{
while (l_list->next)
l_list = l_list->next;
l_list->next = nw_nd;
}
nw_nd->prev = l_list;
return (nw_nd);
}

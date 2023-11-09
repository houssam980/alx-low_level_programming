#include "lists.h"

/**
 * add_dnodeint - adds new node
 * @head: pointer to head
 * @n: num of data
 * Return: the address of element, NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *nw_nd;
nw_nd = malloc(sizeof(dlistint_t));
if (nw_nd == NULL)
return (NULL);
nw_nd->n = n;
nw_nd->next = *head;
nw_nd->prev = NULL;
if ((*head) != NULL)
(*head)->prev = nw_nd;
(*head) = nw_nd;
return (nw_nd);
}

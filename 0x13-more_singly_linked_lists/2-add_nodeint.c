#include "lists.h"

/**
 * add_nodeint - add a new node to begin
 * @head: pointer head
 * @n: int in the new node
 * Return: return address
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nuv;
nuv = malloc(sizeof(listint_t));
if (nuv == NULL)
return (NULL);
nuv->n = n;
nuv->next = *head;
*head = nuv;
return (nuv);
}

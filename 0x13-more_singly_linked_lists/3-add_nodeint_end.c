#include "lists.h"



/**
 * add_nodeint_end - add a new node at end
 * @head: pointer first elements
 * @n: int to set in the new node
 * Return: address otherwise NULL
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *nuv_node, *en_node = *head;
nuv_node = malloc(sizeof(listint_t));
if (nuv_node == NULL)
return (NULL);
nuv_node->n = n;
nuv_node->next = NULL;
if (en_node)
{
while (en_node->next)
en_node = en_node->next;
en_node->next = nuv_node;
}
else
*head = nuv_node;
return (nuv_node);
}

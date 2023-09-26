#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: pointer
 * Return: linked list is empty return 0
 **/
int pop_listint(listint_t **head)
{
unsigned int handler; /*data handler*/
listint_t *nd = *head;
if (!nd)
return (0);
handler = (*head)->n;
*head = nd->next;
free(nd);
return (handler);
}

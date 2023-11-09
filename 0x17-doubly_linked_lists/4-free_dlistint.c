#include "lists.h"

/**
 * free_dlistint - free list
 * @head: pointer to head
 * Return: Nothing To return
 */
void free_dlistint(dlistint_t *head)
{
while (head != NULL)
{
dlistint_t *next = head->next;
free(head);
head = next;
}
}

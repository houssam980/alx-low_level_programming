#include "lists.h"

/**
 * free_listint - free list
 * @head: pointer
 *Return: Nothing to return void
 **/


void free_listint(listint_t *head)
{
listint_t *nd;

while (head)
{
nd = head;
head = head->next;
free(nd);
}
}

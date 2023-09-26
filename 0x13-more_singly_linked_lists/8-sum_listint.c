#include "lists.h"


/**
 * sum_listint - Sum all of them
 * @head: Head
 * Return: return 0 if list empty
 */

int sum_listint(listint_t *head)
{
int lp = 0;
while (head != NULL)
{
lp += head->n;
head = head->next;
}
return (lp);
}

#include "lists.h"

/**
 * sum_dlistint - return the sum of all data
 * @head: pointer to ptr to head
 * Return: return Summ if list NULL return 0
 */

int sum_dlistint(dlistint_t *head)
{
unsigned int summ = 0;
while (head != NULL)
{
summ += head->n;
head = head->next;
}
return (summ);
}

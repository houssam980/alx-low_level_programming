#include "lists.h"

/**
 * listint_len - returnnumber of elements
 * @h:pointer to the list
 * Return: number of nodes
 **/
size_t listint_len(const listint_t *h)
{
	size_t lp = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
lp++;
}
return (lp);
}

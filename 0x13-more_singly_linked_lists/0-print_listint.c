#include "lists.h"



/**
 * print_listint - prints all elements of lists
 * @h: pointer to the list
 * Return: number of nodes
**/
size_t print_listint(const listint_t *h)
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

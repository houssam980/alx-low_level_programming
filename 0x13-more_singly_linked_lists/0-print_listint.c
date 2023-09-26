#include "lists.h"


/**
 * print_listint - print all list elements
 * @h:pointer / list
 * Return: nodes number
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

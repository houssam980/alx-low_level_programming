#include "lists.h"


/**
 * print_listint - print all list elements
 * @h:pointer / list
 * Return: nodes number
 **/
size_t print_listint(const listint_t *h)
{
const listint_t *nd = h;
size_t lp = 0;
while (nd)
{
printf("%i\n", nd->n);
lp++;
nd = nd->next;
}
return (lp);
}

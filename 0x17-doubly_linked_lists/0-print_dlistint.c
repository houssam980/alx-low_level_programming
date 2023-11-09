#include "lists.h"

/**
*print_dlistint -  print all the elemts
*@h:poiner to the head of the list
*Return: num nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
size_t cnt = 0;
while (h != NULL)
{
printf("%d\n", h->n);
cnt++;
h = h->next;
}
return (cnt);
}

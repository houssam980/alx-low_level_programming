#include "lists.h"

/**
*dlistint_len - return the len list
*@h:ptr to head
*Return: len of elems
*/

size_t dlistint_len(const dlistint_t *h)
{
size_t ctn = 0;
while (h != NULL)
{
ctn++;
h = h->next;
}
return (ctn);
}

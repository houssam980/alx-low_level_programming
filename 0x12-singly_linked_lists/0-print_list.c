#include "lists.h"


/**
 * print_list - print elements of a lists
 * @h: value of single list
 * Return: return number of nodes if str is NULL
 */

size_t print_list(const list_t *h)
{
unsigned int counter = 0;
if (h == NULL)
return (0);
while (h != NULL)
{
if (h->str == NULL)
printf("[%u] (nil)\n", h->len);
else
printf("[%u] %s\n", h->len, h->str);
counter += 1;
h = h->next;
}
return (counter);
}

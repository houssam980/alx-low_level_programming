#include "lists.h"

/**
 * list_len - returns the number of elements in a linked
 * @h: single list 
 * Return: return size of the list
 */





size_t list_len(const list_t *h)
{
size_t lp = 0;
while (h)
{
h = h->next;
lp++;
}
return (lp);


}

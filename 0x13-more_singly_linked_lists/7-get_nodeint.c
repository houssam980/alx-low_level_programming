#include "lists.h"

/**
 * get_nodeint_at_index - return node in the index
 * @head: pointer
 * @index: index
 * Return: pointer to node
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *nd;
unsigned int hdr;
for (nd = head, hdr = 0; nd && hdr < index; nd = nd->next, hdr++)
;
return (nd);
}

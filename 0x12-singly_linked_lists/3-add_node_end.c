#include "lists.h"


/**
 * add_node_end - Add new node in the list end
 * @head: head
 * @str: string
 * Return: pointer of the new node added to linked list.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *nuv;
list_t *tpr;
nuv = malloc(sizeof(list_t));
if (!nuv)
return (NULL);
tpr = *head;
nuv->str = strdup(str);
nuv->len = _strlen(str);
nuv->next = NULL;
if (*head == NULL)
{
*head = nuv;
return (nuv);
}
while (tpr->next != NULL)
tpr = tpr->next;
tpr->next = nuv;
return (nuv);
}


/* calculation part*/
/**
 * _strlen - Calculate lenght
 * @s: string
 * Return: lenght
 */

int _strlen(const char *s)
{
int index = 0;
for (; s[index]; index++)
;
return (index);
}

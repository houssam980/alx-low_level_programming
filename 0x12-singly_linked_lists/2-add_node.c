#include "lists.h"

/**
 * add_node - new node at the beginning of list
 * @head: address
 * Return: The length of the string
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *nuv_head = malloc(sizeof(list_t));
if (!head || !nuv_head)
return (NULL);
if (str)
{
nuv_head->str = strdup(str);
if (!nuv_head->str)
{
free(nuv_head);
return (NULL);
}
nuv_head->len = _strlen(nuv_head->str);
}
nuv_head->next = *head;
return (nuv_head);
}

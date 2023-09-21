#include "lists.h"



/**
 * add_node - new node at the beginning of list
 * @head: address
 * Return: The length of the string
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *nuv;
nuv = malloc(sizeof(list_t));
if (!nuv)
return (NULL);
nuv->str = strdup(str);
nuv->len = _strlen(str);
nuv->next = *head;
*head = nuv;
return (nuv);
}
/**
 * _strlen - Calculate op
 * @s: str
 * Return: lenght of the string s.
 */
int _strlen(const char *s)
{
int index = 0;
for (; s[index]; index++)
;
return (index);
}

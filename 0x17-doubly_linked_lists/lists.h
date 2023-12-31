#ifndef _LIST_H
#define _LIST_H

#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 *struct dlistint_s - doubly linked list
 *@n: int
 *@prev: points previous node
 *@next:points next node
 *Return : Nothing to return
 */

typedef struct dlistint_s
{
int n;
struct dlistint_s *prev;
struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);











#endif


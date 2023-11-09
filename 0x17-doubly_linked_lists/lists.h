#ifndef _LIST_H_
#define _LIST_H_

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





















#endif


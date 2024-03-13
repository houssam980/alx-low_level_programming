#ifndef SORTING_ALGO_H_
#define SORTING_ALGO_H_


#include <stdio.h>
#include <stdlib.h>

/**
 * struct listin_s - singly linked list
 * @num: Integer
 * @idx: Index
 * @next: Pointer to next node
 */
typedef struct listint_s
{
int num;
size_t index;
struct listint_s *next;
} listint_t;

/**
 * struct skipl_s - Singly linked list
 * @num: Integer
 * @idx: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 */
typedef struct skipl_s
{
int n;
size_t index;
struct skiplist_s *next;
struct skiplist_s *express;
} skiplist_t;



int linear_search(int *array, size_t size, int value);


#endif

#include "main.h"

/**
 * swap_int - swaps 
 * @a: pointer one
 * @b: pointer two
 */


void swap_int(int *a, int *b)
{
int holder;
holder = *a ;
*a = *b;
*b = holder;
}

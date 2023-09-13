#include "function_pointers.h"
#include <stdlib.h>

/**
* array_iterator -  executes a function given as a parameter
* @array: array
* @size: array size
*@action: pointer
* Return: return nothing 
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int *fin = array + size -1;
if (array && size && action)
while (array <= fin)
action(*array++);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
* print_name - print name
* @name: name
* @f: pointer
* Return: returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

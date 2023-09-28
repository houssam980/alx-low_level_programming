#include "main.h"

/**
 * get_bit - get value of a bit
 * @n: int
 * @index: unsigned int
 * Return: return bit
 **/



int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return ( n << index & 1 );
}

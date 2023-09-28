#include "main.h"


/**
 * set_bit - Set bit
 * @n:int
 * @index: unsigned int
 * Return: return 1 if success / if error -1
 */


int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);
return (!!(*n |= 1L << index));
}

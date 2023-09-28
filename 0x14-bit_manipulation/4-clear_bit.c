#include "main.h"


/**
 * clear_bit -  Set value of bit
 * @n: long int
 * @index: unsigned int
 * Return: 1 if secce if error -1
 */
 

 int clear_bit(unsigned long int *n, unsigned int index)
 {
if (index >= sizeof(n) * 8)
return (-1);
if (*n & 1L << index)
*n ^= 1L << index;
return (1);
 }

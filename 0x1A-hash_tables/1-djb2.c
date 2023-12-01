#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing
 * @str: str to hash
 * Return: calc hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int calc;

hash = 5381;
while ((calc = *str++))
hash = ((hash << 5) + hash) + calc;
return (hash);

}
